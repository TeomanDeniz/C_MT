/*════════════════════════════════════════╦═════════════════════════════╗
║ C - PUT_STR + FD                        ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/25 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

VOID
	PUT_STR_FD(CHAR *STRING, INT FD)
{
	IF (!STRING)
		RETURN ;

	WRITE(FD, STRING, STRLEN(STRING));
}

VOID
	PUT_STR(CHAR *STRING)
{
	IF (!STRING)
		RETURN ;

	WRITE(1, STRING, STRLEN(STRING));
}

VOID
	PUTSTR_FD(CHAR *STRING, INT FD)
{
	IF (!STRING)
		RETURN ;

	WRITE(FD, STRING, STRLEN(STRING));
}

VOID
	PUTSTR(CHAR *STRING)
{
	IF (!STRING)
		RETURN ;

	WRITE(1, STRING, STRLEN(STRING));
}
