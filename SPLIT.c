/*══════════════════════════════════════╦═════════════════════════════╗
║ C - SPLIT                             ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │ 2022/11/15 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

STATIC INLINE INT
	COUNT_WORDS(CHAR CONST *STR, CHAR CHARACTER)
{
	INT (COUNTER) = 0;
	INT  (RESULT) = 0;

	WHILE (STR[COUNTER])
	{
		IF (STR[COUNTER] == CHARACTER)
			COUNTER++;
		ELSE
		{
			RESULT++;

			WHILE (STR[COUNTER] && STR[COUNTER] != CHARACTER)
				COUNTER++;
		}
	}

	RETURN (RESULT);
}

STATIC INLINE CHAR
	*MAKE_WORDS(CHAR *WORD, CHAR CONST *STR, INT COUNT_2, INT LINE)
{
	INT (COUNTER) = 0;

	WHILE (LINE > 0)
		WORD[COUNTER++] = STR[COUNT_2 - LINE--];

	WORD[COUNTER] = 0;

	RETURN (WORD);
}

STATIC INLINE CHAR
	**SPLIT_WORDS(CHAR **RESULT, CHAR CONST *STR, CHAR CHARACTER, INT COUNTER)
{
	INT (COUNT_1) = 0;
	INT (COUNT_2) = 0;
	INT    (LINE) = 0;

	WHILE (STR[COUNT_2] && COUNT_1 < COUNTER)
	{
		WHILE (STR[COUNT_2] && STR[COUNT_2] == CHARACTER)
			COUNT_2++;

		WHILE (STR[COUNT_2] && STR[COUNT_2] != CHARACTER)
		{
			COUNT_2++;

			LINE++;
		}

		RESULT[COUNT_1] = (CHAR *) MALLOC(SIZEOF(CHAR) * (LINE + 1));

		IF (!RESULT[COUNT_1])
			RETURN (0);

		MAKE_WORDS(RESULT[COUNT_1], STR, COUNT_2, LINE);

		LINE = 0;

		COUNT_1++;
	}

	RESULT[COUNT_1] = 0;

	RETURN (RESULT);
}

CHAR
	**SPLIT(CHAR CONST *STR, CHAR CHARACTER)
{
	INT   (COUNTER) = COUNT_WORDS(STR, CHARACTER);
	CHAR **(RESULT) = (CHAR **) MALLOC(SIZEOF(CHAR *) * (COUNTER + 1));

	IF (STR == 0)
		RETURN (0);

	IF (!RESULT)
		RETURN (0);

	SPLIT_WORDS(RESULT, STR, CHARACTER, COUNTER);

	RETURN (RESULT);
}
