/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRLCAT                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/13 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

SIZE_T
	STRLCAT(CHAR *DST, CONST CHAR *RESTRICT SRC, SIZE_T DST_SIZE)
{
	REGISTER SIZE_T  (COUNTER) = 0;
	REGISTER SIZE_T  (DST_LEN) = STRLEN(DST);
	REGISTER SIZE_T (SIZE_DST) = STRLEN(DST);
	REGISTER SIZE_T (SIZE_SRC) = STRLEN(SRC);

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
