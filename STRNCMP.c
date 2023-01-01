/*══════════════════════════════════════╦═════════════════════════════╗
║ C - STRNCMP                           ║       Maximum Tension       ║
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

INT
	STRNCMP(CONST CHAR *STRING_1, CONST CHAR *STRING_2, SIZE_T SIZE)
{
	REGISTER INT (COUNTER) = -1;

	WHILE (COUNTER++, COUNTER < (INT)SIZE &&\
		(STRING_1[COUNTER] != '\0' || STRING_2[COUNTER] != '\0'))
		IF (STRING_1[COUNTER] != STRING_2[COUNTER])
			RETURN ((UNSIGNED CHAR)STRING_1[COUNTER] - (UNSIGNED CHAR)STRING_2[COUNTER]);
	RETURN (0);
}
