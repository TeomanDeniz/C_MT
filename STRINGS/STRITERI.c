/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRITERI                            ║       Maximum Tension       ║
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
	STRITERI(CHAR *STRING, VOID (*FUNCTION)(UNSIGNED INT, CHAR *))
#else
VOID
	STRITERI(STRING, FUNCTION)

	CHAR     *(STRING);
	VOID (*FUNCTION)();
#endif
{
	REGISTER INT (COUNTER) = -1;

	IF (!STRING)
		RETURN ;

	WHILE (COUNTER++, STRING[COUNTER])
		FUNCTION(COUNTER, &STRING[COUNTER]);
}
