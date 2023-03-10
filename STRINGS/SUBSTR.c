/*════════════════════════════════════════╦═════════════════════════════╗
║ C - SUBSTR                              ║       Maximum Tension       ║
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
CHAR
	*SUBSTR(CHAR CONST *STRING, REGISTER UNSIGNED INT START, REGISTER SIZE_T LEN)
#else
CHAR
	*SUBSTR(STRING, START, LEN)

	CHAR CONST          *(STRING);
	REGISTER UNSIGNED INT (START);
	REGISTER SIZE_T         (LEN);
#endif
{
	CHAR            *(RESULT);
	REGISTER SIZE_T (COUNTER);

	IF (!STRING)
		RETURN (NULL);

	COUNTER = STRLEN(STRING) - START;
	IF (LEN < COUNTER)
		COUNTER = LEN;

	IF (START > (UNSIGNED)STRLEN(STRING) - 1)
		RETURN (STRDUP(""));

	RESULT = (CHAR *) MALLOC(SIZEOF(CHAR) * (COUNTER + 1));
	IF (!RESULT)
		RETURN (0);

	STRLCPY(RESULT, STRING + START, COUNTER + 1);
	RETURN (RESULT);
}
