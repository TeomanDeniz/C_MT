/*══════════════════════════════════════╦═════════════════════════════╗
║ C - MEMMOVE                           ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ MIT        │ │ 2022/01/01 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

VOID
	*MEMMOVE(VOID *DST, CONST VOID *SRC, SIZE_T LEN)
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
