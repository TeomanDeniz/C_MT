/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRTRIM                             ║       Maximum Tension       ║
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

STATIC INLINE INT
	CHARACTER_CHECKER(CONST CHAR *STRING, CHAR CHARACTER)
{
	REGISTER INT (COUNTER) = 0;

	WHILE (STRING[COUNTER] != '\0')
	{
		IF (STRING[COUNTER] == CHARACTER)
			RETURN (1);

		COUNTER++;
	}

	RETURN (0);
}

CHAR
	*STRTRIM(CHAR CONST *STRING_1, CHAR CONST *STRING_2)
{
	REGISTER INT (FIRST_INDEX) = 0;
	REGISTER INT     (COUNTER) = 0;
	REGISTER INT  (LAST_INDEX) = STRLEN(STRING_1);
	CHAR             *(RESULT);

	IF (!STRING_1)
		RETURN (NULL);

	WHILE (STRING_1[FIRST_INDEX] != '\0' && CHARACTER_CHECKER(STRING_2, STRING_1[FIRST_INDEX]))
		FIRST_INDEX++;

	WHILE (FIRST_INDEX < LAST_INDEX && CHARACTER_CHECKER(STRING_2, STRING_1[LAST_INDEX - 1]))
		LAST_INDEX--;

	RESULT = (CHAR *) MALLOC(SIZEOF(CHAR) * (LAST_INDEX - FIRST_INDEX + 1));

	IF (!RESULT)
		RETURN (NULL);

	WHILE (FIRST_INDEX < LAST_INDEX)
	{
		RESULT[COUNTER] = STRING_1[FIRST_INDEX];
		COUNTER++;
		FIRST_INDEX++;
	}

	RESULT[COUNTER] = '\0';
	RETURN (RESULT);
}
