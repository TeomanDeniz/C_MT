/*════════════════════════════════════════╦═════════════════════════════╗
║ C - GOTOXY                              ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/25 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef _WIN32

#ifdef __STDC__
VOID
	GOTOXY(REGISTER INT X, REGISTER INT Y)
#else
VOID
	GOTOXY(X, Y)

	REGISTER INT (X);
	REGISTER INT (Y);
#endif
{
	COORD COORD;
	COORD.X = X;
	COORD.Y = Y;
	SET_CONSOLE_CURSOR_POSITION(GET_STD_HADNLE(STD_OUTPUT_HANDLE), COORD);
}

#else

#ifdef __STDC__
VOID
	GOTOXY(REGISTER INT X, REGISTER INT Y)
#else
VOID
	GOTOXY(X, Y)

	REGISTER INT (X);
	REGISTER INT (Y);
#endif
{
	PRINTF("%C[%D;%Df", 0X1B, Y, X);
}

#endif
