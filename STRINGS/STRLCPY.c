/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRLCPY                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/12/09 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
SIZE_T
	STRLCPY(CHAR *DST, CONST CHAR *SRC, REGISTER SIZE_T SIZE)
#else
SIZE_T
	STRLCPY(DST, SRC, SIZE)

	CHAR            *(DST);
	CONST CHAR      *(SRC);
	REGISTER SIZE_T (SIZE);
#endif
{
	REGISTER SIZE_T (COUNTER) = 0;

	IF (SIZE > 0)
	{
		WHILE (SRC[COUNTER] && COUNTER < (SIZE - 1))
		{
			DST[COUNTER] = SRC[COUNTER];
			COUNTER++;
		}

		DST[COUNTER] = 0;
	}

	WHILE (SRC[COUNTER])
		COUNTER++;

	RETURN (COUNTER);
}
