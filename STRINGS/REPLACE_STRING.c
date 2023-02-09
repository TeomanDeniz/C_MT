/*════════════════════════════════════════╦═════════════════════════════╗
║ C - REPLACE_STRING                      ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2021/12/07 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
CHAR
	*RELPACE_STRING(CHAR* STRING, CHAR* OLD, CHAR* NEW)
#else
CHAR
	*RELPACE_STRING(STRING, OLD, NEW)

	CHAR* (STRING);
	CHAR*    (OLD);
	CHAR*    (NEW);
#endif
{

	/*═════════════════════════════════════════════╗
	║      STR       OLD      NEW        RESULT    ║
	╠──────────────────────────────────────────────╣
	║ "ABC1234DEF"  "1234"   "####" = "ABC####DEF" ║
	╚═════════════════════════════════════════════*/

	CHAR*                (RESULT);
	REGISTER INT        (COUNTER) = -1;
	REGISTER INT (MALLOC_COUNTER) = 0;

	WHILE (STRING[++COUNTER] != '\0')
	{
		IF(STRSTR(&STRING[COUNTER], OLD) == &STRING[COUNTER])
		{
			MALLOC_COUNTER++;
			COUNTER += STRLEN(OLD) - 1;
		}
	}

	RESULT = (CHAR*) MALLOC(COUNTER + MALLOC_COUNTER * (STRLEN(NEW) - STRLEN(OLD)) + 1);

	IF (!RESULT)
		RETURN(NULL);

	COUNTER = 0;

	WHILE (*STRING)
	{
		IF(STRSTR(STRING, OLD) == STRING)
		{
			STRCPY(&RESULT[COUNTER], NEW);
			COUNTER += STRLEN(NEW);
			STRING += STRLEN(OLD);
		}
		ELSE
			RESULT[COUNTER++] = *STRING++;
	}

	RESULT[COUNTER] = '\0';
	RETURN (RESULT);
}
