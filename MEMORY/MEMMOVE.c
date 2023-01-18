/*════════════════════════════════════════╦═════════════════════════════╗
║ C - MEMMOVE                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/01/01 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/13 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

VOID
	*MEMMOVE(VOID *DST, CONST VOID *RESTRICT SRC, CONST SIZE_T LEN)
{
	REGISTER UNSIGNED INT (COUNTER) = (UNSIGNED INT)LEN;
	CHAR                *(BUFFER_1) = (CHAR *)SRC;
	CHAR                *(BUFFER_2) = (CHAR *)DST;

	IF (DST == SRC)
		RETURN (DST);
	ELSE IF (BUFFER_2 > BUFFER_1)
	{
		WHILE (COUNTER-- > 0)
			((UNSIGNED CHAR *)DST)[COUNTER] = ((UNSIGNED CHAR *)SRC)[COUNTER];
	}
	ELSE
	{
		COUNTER = 0;

		WHILE (COUNTER < LEN)
		{
			((UNSIGNED CHAR *)DST)[COUNTER] = ((UNSIGNED CHAR *)SRC)[COUNTER];
			COUNTER++;
		}
	}

	RETURN (BUFFER_2);
}
