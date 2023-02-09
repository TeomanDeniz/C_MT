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
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
INT
	ATOI(CONST CHAR *STRING)
#else
INT
	ATOI(STRING)

	CONST CHAR *(STRING);
#endif
{
	REGISTER INT (COUNTER) = 0;
	REGISTER INT   (MINUS) = 1;
	REGISTER INT     (TMP) = 0;

	IF (!STRING)
		RETURN (0);

	WHILE (STRING[COUNTER] == 13 || (STRING[COUNTER] >= 9 && STRING[COUNTER] <= 13))
		COUNTER++;

	WHILE (STRING[COUNTER] == '+' || STRING[COUNTER] == '-')
	{
		IF (STRING[COUNTER] == '-')
			MINUS *= -1;

		COUNTER++;
	}

	WHILE (STRING[COUNTER] >= '0' && STRING[COUNTER] <= '9')
	{
		TMP = (TMP * 10) + (STRING[COUNTER] - 0X30);
		COUNTER++;
	}

	RETURN (TMP * MINUS);
}
