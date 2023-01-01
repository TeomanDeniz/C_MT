/*══════════════════════════════════════╦═════════════════════════════╗
║ C - STRNSTR                           ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ MIT        │ │ 2022/01/01 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

CHAR
	*STRNSTR(CONST CHAR *HAYSTACK, CONST CHAR *NEEDLE, SIZE_T LEN)
{
	SIZE_T (COUNTER_1) = 0;
	SIZE_T (COUNTER_2) = 0;
	SIZE_T     (N_LEN) = 0;

	N_LEN = STRLEN(NEEDLE);
	IF (HAYSTACK == NULL)
		RETURN (NULL);

	IF (N_LEN == 0 || HAYSTACK == NEEDLE)
		RETURN ((char *)HAYSTACK);

	WHILE (((CHAR *)(HAYSTACK))[COUNTER_1] != '\0' && COUNTER_1 < LEN)
	{
		WHILE (((CHAR *)(HAYSTACK))[COUNTER_1 + COUNTER_2] != '\0' && NEEDLE[COUNTER_2] != '\0'
			&& ((CHAR *)(HAYSTACK))[COUNTER_1 + COUNTER_2] == NEEDLE[COUNTER_2] && COUNTER_1 + COUNTER_2 < LEN)
			COUNTER_2++;

		IF (COUNTER_2 == N_LEN)
			RETURN ((CHAR *)(HAYSTACK + COUNTER_1));

		COUNTER_1++;
	}

	RETURN (0);
}
