/*════════════════════════════════════════╦═════════════════════════════╗
║ C - CALLOC                              ║       Maximum Tension       ║
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
STATIC INLINE VOID
	BZERO(VOID *ELEMENT, REGISTER SIZE_T SIZE)
#else
STATIC INLINE VOID
	BZERO(VOID *ELEMENT, REGISTER SIZE_T SIZE)

	VOID        *(ELEMENT);
	REGISTER SIZE_T (SIZE);
#endif
{
	MEMSET(ELEMENT, '\0', SIZE);
}

#ifdef __STDC__
VOID
	*CALLOC(REGISTER SIZE_T COUNT, REGISTER SIZE_T SIZE)
#else
VOID
	*CALLOC(COUNT, SIZE)

	REGISTER SIZE_T (COUNT);
	REGISTER SIZE_T  (SIZE);
#endif
{
	VOID *(RESULT) = MALLOC(COUNT * SIZE);

	IF (RESULT == NULL)
		RETURN (NULL);

	BZERO(RESULT, COUNT * SIZE);
	RETURN (RESULT);
}
