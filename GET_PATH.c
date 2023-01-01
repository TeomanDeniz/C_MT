/*══════════════════════════════════════╦═════════════════════════════╗
║ C - GET_PATH                          ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │ 2022/12/07 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

CHAR
	*GET_PATH(CONST UNSIGNED VOLATILE INT CHOICE)
{

	/*═══════════════════════════════════════╗
	║ CHOICE 1 = __APP_NAME__ = "GET_PATH.c" ║
	╠────────────────────────────────────────╣
	║ CHOICE 2 = __APP_PATH__ = "C:/USERS/." ║
	╚═══════════════════════════════════════*/

	CHAR  (TMP)[1024];
	CHAR (TMP2)[10000];
	CHAR (TMP3)[10000];

	GetModuleFileName(NULL, TMP, 1024-1);

	CHAR *(__APP_NAME__) = strrchr(TMP, '\\')+1;

	sprintf(TMP2, "%s####%s", TMP, __APP_NAME__);

	sprintf(TMP3, "\\%s####%s", __APP_NAME__, __APP_NAME__);

	CHAR *(__APP_PATH__) = RELPACE_STRING(TMP2, TMP3, "");

	IF (CHOICE == 1)
		RETURN (__APP_NAME__);

	IF (CHOICE == 2)
		RETURN (__APP_PATH__);

	RETURN (0);
}
