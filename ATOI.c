/*══════════════════════════════════════╦═════════════════════════════╗
║ C - ATOI                              ║       Maximum Tension       ║
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

INT	ATOI(CONST CHAR *STR)
{
	INT (COUNTER) = 0;
	INT (MINUS) = 1;
	INT (TMP) = 0;
	WHILE (STR[COUNTER] == 32 || (STR[COUNTER] >= 9 && STR[COUNTER] <= 13))
		COUNTER++;
	WHILE (STR[COUNTER] == 43 || STR[COUNTER] == 45)
	{
		IF (STR[COUNTER] == 45)
			MINUS *= -1;
		COUNTER++;
	}
	WHILE (STR[COUNTER] >= 48 && STR[COUNTER] <= 57)
	{
		TMP = (TMP * 10) + (STR[COUNTER] - 48);
		COUNTER++;
	}
	RETURN (TMP * MINUS);
}
