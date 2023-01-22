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
║ ╚─────────┴────────────╝ │ U 2023/01/13 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

STATIC INLINE INT
	COUNT_WORDS(CHAR CONST *STRING, CHAR CHARACTER)
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

STATIC INLINE CHAR
	*MAKE_WORDS(CHAR *WORD, CHAR CONST *STRING, INT COUNT_2, INT LINE)
{
	REGISTER INT (COUNTER) = 0;

	WHILE (LINE > 0)
		WORD[COUNTER++] = STRING[COUNT_2 - LINE--];

	WORD[COUNTER] = 0;
	RETURN (WORD);
}

STATIC INLINE CHAR
	**SPLIT_WORDS(CHAR **RESULT, CHAR CONST *STRING, CHAR CHARACTER, INT COUNTER)
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

CHAR
	**SPLIT(CHAR CONST *STRING, CHAR CHARACTER)
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
