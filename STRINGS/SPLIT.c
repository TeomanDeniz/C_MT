/*════════════════════════════════════════╦═════════════════════════════╗
║ C - SPLIT                               ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
STATIC INLINE INT
	COUNT_WORDS(CHAR CONST *STRING, CHAR CHARACTER)
#else
STATIC INLINE INT
	COUNT_WORDS(STRING, CHARACTER)

	CHAR CONST *(STRING);
	CHAR     (CHARACTER);
#endif
{
	REGISTER INT (COUNTER) = 0;
	REGISTER INT  (RESULT) = 0;

	WHILE (STRING[COUNTER])
	{
		IF (STRING[COUNTER] == CHARACTER)
			COUNTER++;
		ELSE
		{
			RESULT++;

			WHILE (STRING[COUNTER] && STRING[COUNTER] != CHARACTER)
				COUNTER++;
		}
	}

	RETURN (RESULT);
}

#ifdef __STDC__
STATIC INLINE CHAR
	*MAKE_WORDS(CHAR *WORD, CHAR CONST *STRING, INT COUNT_2, INT LINE)
#else
STATIC INLINE CHAR
	*MAKE_WORDS(WORD, STRING, COUNT_2, LINE)

	CHAR         *(WORD);
	CHAR CONST *(STRING);
	INT        (COUNT_2);
	INT           (LINE);
#endif
{
	REGISTER INT (COUNTER) = 0;

	WHILE (LINE > 0)
		WORD[COUNTER++] = STRING[COUNT_2 - LINE--];

	WORD[COUNTER] = 0;
	RETURN (WORD);
}

#ifdef __STDC__
STATIC INLINE CHAR
	**SPLIT_WORDS(CHAR **RESULT, CHAR CONST *STRING, CHAR CHARACTER, INT COUNTER)
#else
STATIC INLINE CHAR
	**SPLIT_WORDS(RESULT, STRING, CHARACTER, COUNTER)

	CHAR      **(RESULT);
	CHAR CONST *(STRING);
	CHAR     (CHARACTER);
	INT        (COUNTER);
#endif
{
	REGISTER INT (COUNT_1) = 0;
	REGISTER INT (COUNT_2) = 0;
	REGISTER INT    (LINE) = 0;

	WHILE (STRING[COUNT_2] && COUNT_1 < COUNTER)
	{
		WHILE (STRING[COUNT_2] && STRING[COUNT_2] == CHARACTER)
			COUNT_2++;

		WHILE (STRING[COUNT_2] && STRING[COUNT_2] != CHARACTER)
		{
			COUNT_2++;
			LINE++;
		}

		RESULT[COUNT_1] = (CHAR *) MALLOC(SIZEOF(CHAR) * (LINE + 1));

		IF (!RESULT[COUNT_1])
			RETURN (0);

		MAKE_WORDS(RESULT[COUNT_1], STRING, COUNT_2, LINE);
		LINE = 0;
		COUNT_1++;
	}

	RESULT[COUNT_1] = 0;
	RETURN (RESULT);
}

#ifdef __STDC__
CHAR
	**SPLIT(CHAR CONST *STRING, CHAR CHARACTER)
#else
CHAR
	**SPLIT(STRING, CHARACTER)

	CHAR CONST *(STRING);
	CHAR     (CHARACTER);
#endif
{
	REGISTER INT (COUNTER) = COUNT_WORDS(STRING, CHARACTER);
	CHAR        **(RESULT) = (CHAR **) MALLOC(SIZEOF(CHAR *) * (COUNTER + 1));

	IF (!RESULT)
		RETURN (0);

	IF (STRING == 0)
	{
		FREE(RESULT);
		RETURN (0);
	}

	SPLIT_WORDS(RESULT, STRING, CHARACTER, COUNTER);
	RETURN (RESULT);
}
