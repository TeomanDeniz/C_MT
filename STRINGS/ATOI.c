/*════════════════════════════════════════╦═════════════════════════════╗
║ C - ATOI                                ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/18 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

INT
	ATOI(CONST CHAR *STR)
{
	REGISTER INT (COUNTER) = 0;
	REGISTER INT   (MINUS) = 1;
	REGISTER INT     (TMP) = 0;

	WHILE (STR[COUNTER] == ' ' || (STR[COUNTER] >= 9 && STR[COUNTER] <= 13))
		COUNTER++;

	WHILE (STR[COUNTER] == '+' || STR[COUNTER] == '-')
	{
		IF (STR[COUNTER] == '-')
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
