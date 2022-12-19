/*══════════════════════════════════════╦═════════════════════════════╗
║ C - STRLCPY                           ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │ 2022/12/09 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

SIZE_T	STRLCPY(CHAR *DST, CONST CHAR *SRC, SIZE_T SIZE)
{
	SIZE_T (COUNTER) = 0;
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
