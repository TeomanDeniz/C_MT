/*══════════════════════════════════════╦═════════════════════════════╗
║ C - REPLACE_STRING                    ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │ 2021/12/07 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

CHAR
	*RELPACE_STRING(CHAR* STR, CHAR* OLD, CHAR* NEW)
{

	/*═════════════════════════════════════════════╗
	║      STR       OLD      NEW        RESULT    ║
	╠──────────────────────────────────────────────╣
	║ "ABC1234DEF"  "1234"   "####" = "ABC####DEF" ║
	╚═════════════════════════════════════════════*/

	CHAR*                (RESULT);
	REGISTER INT        (COUNTER) = -1;
	REGISTER INT (MALLOC_COUNTER) = 0;
	REGISTER INT        (NEW_LEN) = STRLEN(NEW);
	REGISTER INT        (OLD_LEN) = STRLEN(OLD);

	WHILE (STR[++COUNTER] != '\0')
	{
		IF(STRSTR(&STR[COUNTER], OLD) == &STR[COUNTER])
		{
			MALLOC_COUNTER++;

			COUNTER += OLD_LEN - 1;
		}
	}

	RESULT = (CHAR*) MALLOC(COUNTER + MALLOC_COUNTER * (NEW_LEN - OLD_LEN) + 1);

	IF (!RESULT)
		RETURN(NULL);

	COUNTER = 0;

	WHILE (*STR)
	{
		IF(STRSTR(STR, OLD) == STR)
		{
			STRCPY(&RESULT[COUNTER], NEW);

			COUNTER += NEW_LEN;

			STR += OLD_LEN;
		}
		ELSE
			RESULT[COUNTER++] = *STR++;
	}

	RESULT[COUNTER] = '\0';

	RETURN (RESULT);
}
