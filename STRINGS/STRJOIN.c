/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRJOIN                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/18 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/18 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

CHAR
	*STRJOIN(CHAR CONST *STRING_1, CONST CHAR *STRING_2)
{
	CHAR        *(RESULT);
	REGISTER SIZE_T (LEN) = STRLEN(STRING_1) + STRLEN(STRING_2);

	IF (!STRING_1 || !STRING_2)
		RETURN (0);

	RESULT = (CHAR *) MALLOC(SIZEOF(CHAR) * (LEN + 1));
	IF (!RESULT)
		RETURN (0);

	STRLCPY(RESULT, STRING_1, STRLEN(STRING_1) + 1);
	STRLCAT(RESULT, STRING_2, STRLEN(STRING_1) + STRLEN(STRING_2) + 1);
	RETURN (RESULT);
}
