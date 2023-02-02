/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRJOIN                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/02/02 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/02 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

CHAR
	*STRJOIN(CONST CHAR **RESTRICT STRINGS, CHAR *RESTRICT JOIN_STRING)
{
	CHAR*        (RESULT);
	REGISTER INT (X) = 0;
	REGISTER INT (Y) = 0;

	IF (!STRINGS || STRINGS == NULL || STRINGS[0] == NULL)
		RETURN (NULL);

	WHILE (STRINGS[X])
	{
		WHILE(STRINGS[X][Y])
			Y++;

		X++;
	}

	IF (!JOIN_STRING || JOIN_STRING == NULL)
		JOIN_STRING = "";

	RESULT = (CHAR *) MALLOC(Y + (STRLEN(JOIN_STRING) * X) + 1);

	IF (!RESULT)
		RETURN (NULL);

	X = 0;
	STRCPY(RESULT, STRINGS[0]);

	WHILE (X++, STRINGS[X])
	{
		STRCAT(RESULT, JOIN_STRING);
		STRCAT(RESULT, STRINGS[X]);
	}
	RETURN (RESULT);
}
