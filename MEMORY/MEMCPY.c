/*════════════════════════════════════════╦═════════════════════════════╗
║ C - MEMCPY                              ║       Maximum Tension       ║
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
	*MEMCPY(VOID *DEST, CONST VOID *SRC, REGISTER SIZE_T SIZE)
#else
VOID
	*MEMCPY(DEST, SRC, SIZE)

	VOID           *(DEST);
	CONST VOID      *(SRC);
	REGISTER SIZE_T (SIZE);
#endif
{
	CONST CHAR     *(BUFFER1) = (CHAR *)SRC;
	REGISTER SIZE_T (COUNTER) = 0;
	CHAR           *(BUFFER2) = DEST;

	IF (!DEST && !SRC)
		RETURN (0);

	WHILE (COUNTER < SIZE)
	{
		BUFFER2[COUNTER] = BUFFER1[COUNTER];
		COUNTER++;
	}

	RETURN (DEST);
}
