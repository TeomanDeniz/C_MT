/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRNCMP                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/09/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
INT
	STRNCMP(CONST CHAR *RESTRICT STRING_1, CONST CHAR *RESTRICT STRING_2, CONST SIZE_T SIZE)
#else
INT
	STRNCMP(STRING_1, STRING_2, SIZE)

	CONST CHAR *(STRING_1);
	CONST CHAR *(STRING_2);
	CONST SIZE_T    (SIZE);
#endif
{
	REGISTER INT (COUNTER) = -1;

	WHILE (COUNTER++, COUNTER < (INT)SIZE && (STRING_1[COUNTER] != '\0' || STRING_2[COUNTER] != '\0'))
		IF (STRING_1[COUNTER] != STRING_2[COUNTER])
			RETURN ((UNSIGNED CHAR)STRING_1[COUNTER] - (UNSIGNED CHAR)STRING_2[COUNTER]);

	RETURN (0);
}
