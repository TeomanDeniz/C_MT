/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRMAPI                             ║       Maximum Tension       ║
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
	*STRMAPI(CHAR CONST *STRING, CHAR (*FUNCTION)(UNSIGNED INT, CHAR))
#else
CHAR
	*STRMAPI(STRING, FUNCTION)

	CHAR CONST *(STRING);
	CHAR   (*FUNCTION)();
#endif
{
	REGISTER UNSIGNED INT (COUNTER) = 0;
	CHAR                  *(RESULT);

	IF (!STRING)
		RETURN (NULL);

	RESULT = (CHAR *) MALLOC(SIZEOF(CHAR) * (STRLEN(STRING)) + 1);
	IF (RESULT == NULL)
		RETURN (NULL);

	WHILE (STRING[COUNTER])
	{
		RESULT[COUNTER] = FUNCTION(COUNTER, STRING[COUNTER]);
		COUNTER++;
	}

	RESULT[COUNTER] = '\0';
	RETURN (RESULT);
}
