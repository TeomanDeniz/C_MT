/*════════════════════════════════════════╦═════════════════════════════╗
║ C - MEMCMP                              ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/18 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
INT
	MEMCMP(CONST VOID *OBJECT_1, CONST VOID *OBJECT_2, REGISTER SIZE_T LEN)
#else
INT
	MEMCMP(OBJECT_1, OBJECT_2, LEN)

	CONST VOID *(OBJECT_1);
	CONST VOID *(OBJECT_2);
	REGISTER SIZE_T  (LEN);
#endif
{
	REGISTER SIZE_T (COUNTER) = 0;
	UNSIGNED CHAR *(BUFFER_1) = (UNSIGNED CHAR *)OBJECT_1;
	UNSIGNED CHAR *(BUFFER_2) = (UNSIGNED CHAR *)OBJECT_2;

	IF (LEN == 0)
		RETURN (0);

	WHILE ((BUFFER_1[COUNTER] == BUFFER_2[COUNTER]) && COUNTER < LEN - 1)
		COUNTER++;

	RETURN (BUFFER_1[COUNTER] - BUFFER_2[COUNTER]);
}
