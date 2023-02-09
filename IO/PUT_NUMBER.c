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
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
VOID
	PUT_NUMBER_FD(REGISTER INT NUMBER, REGISTER INT FD)
#else
VOID
	PUT_NUMBER_FD(NUMBER, FD)

	REGISTER INT (NUMBER);
	REGISTER INT     (FD);
#endif
{
	REGISTER LONG (LONG_NUMBER) = (LONG)NUMBER;

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

#ifdef __STDC__
VOID
	PUT_NUMBER(REGISTER INT NUMBER)
#else
VOID
	PUT_NUMBER(NUMBER)

	REGISTER INT (NUMBER);
#endif
{
	PUT_NUMBER_FD(NUMBER, 1);
}
