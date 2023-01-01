/*══════════════════════════════════════╦═════════════════════════════╗
║ C - STRSTR                            ║       Maximum Tension       ║
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

CHAR
	*STRSTR(CHAR *STRING, CHAR *SUB_STRING)
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
