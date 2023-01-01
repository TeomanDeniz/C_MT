/*══════════════════════════════════════╦═════════════════════════════╗
║ C - STRLCAT                           ║       Maximum Tension       ║
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

SIZE_T
	STRLCAT(CHAR *DST, CONST CHAR *SRC, SIZE_T DST_SIZE)
{
	SIZE_T  (COUNTER) = 0;
	SIZE_T  (DST_LEN) = STRLEN(DST);
	SIZE_T (SIZE_DST) = STRLEN(DST);
	SIZE_T (SIZE_SRC) = STRLEN(SRC);

	IF (DST_SIZE <= SIZE_DST)
		RETURN (DST_SIZE + SIZE_SRC);

	WHILE (SRC[COUNTER] != '\0' && DST_LEN < DST_SIZE - 1)
	{
		DST[DST_LEN] = SRC[COUNTER];
		DST_LEN++;
		COUNTER++;
	}

	DST[DST_LEN] = '\0';
	RETURN (SIZE_DST + SIZE_SRC);
}
