/*════════════════════════════════════════╦═════════════════════════════╗
║ C - STRMSTR                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/11/15 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
CHAR
	*STRNSTR(CONST CHAR *HAYSTACK, CONST CHAR *RESTRICT NEEDLE, CONST SIZE_T LEN)
#else
CHAR
	*STRNSTR(HAYSTACK, RESTRICT NEEDLE, LEN)

	CONST CHAR *(HAYSTACK);
	CONST CHAR   *(NEEDLE);
	CONST SIZE_T     (LEN);
#endif
{
	REGISTER SIZE_T    (C1) = 0;
	REGISTER SIZE_T    (C2) = 0;
	REGISTER SIZE_T (N_LEN) = STRLEN(NEEDLE);

	IF (HAYSTACK == NULL)
		RETURN (NULL);

	IF (N_LEN == 0 || HAYSTACK == NEEDLE)
		RETURN ((CHAR *)HAYSTACK);

	WHILE (((CHAR *)(HAYSTACK))[C1] != '\0' && C1 < LEN)
	{
		WHILE (((CHAR *)(HAYSTACK))[C1 + C2] != '\0' && NEEDLE[C2] != '\0' \
			&& ((CHAR *)(HAYSTACK))[C1 + C2] == NEEDLE[C2] && C1 + C2 < LEN)
			C2++;

		IF (C2 == N_LEN)
			RETURN ((CHAR *)(HAYSTACK + C1));

		C1++;
	}

	RETURN (NULL);
}
