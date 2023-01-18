/*════════════════════════════════════════╦═════════════════════════════╗
║ C - PUT_NUMBER + FD                     ║       Maximum Tension       ║
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

VOID
	PUT_NUMBER_FD(INT NUMBER, INT FD)
{
	LONG (LONG_NUMBER) = (LONG)NUMBER;

	IF (LONG_NUMBER < 0)
	{
		PUT_CHAR_FD('-', FD);
		LONG_NUMBER = (LONG_NUMBER * -1);
	}

	IF (LONG_NUMBER < 10)
		PUT_CHAR_FD(LONG_NUMBER + 48, FD);

	IF (LONG_NUMBER > 9)
	{
		PUT_NUMBER_FD(LONG_NUMBER / 10, FD);
		PUT_NUMBER_FD(LONG_NUMBER % 10, FD);
	}
}

VOID
	PUT_NUMBER(INT NUMBER)
{
	PUT_NUMBER_FD(NUMBER, 1);
}
