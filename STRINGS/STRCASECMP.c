/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRCASECMP                          ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/02/04 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
INT
	STRCASECMP(CONST CHAR *RESTRICT STRING_1, CONST CHAR *RESTRICT STRING_2)
#else
INT
	STRCASECMP(STRING_1, STRING_2)

	CONST CHAR *(STRING_1);
	CONST CHAR *(STRING_2);
#endif
{
	REGISTER INT (COUNTER) = 0;

	WHILE (STRING_1[COUNTER] != '\0' && STRING_2[COUNTER] != '\0' \
		&& (STRING_1[COUNTER] == STRING_2[COUNTER] \
		|| UPPER_CASE(STRING_1[COUNTER]) == STRING_2[COUNTER] \
		|| LOWER_CASE(STRING_1[COUNTER]) == STRING_2[COUNTER]))
		COUNTER++;
	RETURN ((UNSIGNED CHAR)STRING_1[COUNTER] - (UNSIGNED CHAR)STRING_2[COUNTER]);
}
