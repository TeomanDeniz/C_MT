/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRSTR                              ║       Maximum Tension       ║
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
CHAR
	*STRSTR(CHAR *STRING, CHAR *RESTRICT SUB_STRING)
#else
CHAR
	*STRSTR(STRING, SUB_STRING)

	CHAR     *(STRING);
	CHAR *(SUB_STRING);
#endif
{
	CHAR *(TMP_STR) = STRING;
	CHAR *(SUB_STR) = SUB_STRING;

	IF (*SUB_STR == 0)
		RETURN (STRING);

	WHILE (STRING++, *STRING != 0)
	{
		IF (*STRING != *SUB_STR)
			CONTINUE;

		WHILE (TMP_STR != 0 && SUB_STR != 0)
		{
			IF (*SUB_STR == 0)
				RETURN (STRING);

			IF (*TMP_STR++ != *SUB_STR++)
				BREAK;
		}

		SUB_STR = SUB_STRING;
	}

	RETURN (NULL);
}
