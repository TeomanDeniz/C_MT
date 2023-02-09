/*════════════════════════════════════════╦═════════════════════════════╗
║ C - MEMCHR                              ║       Maximum Tension       ║
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
VOID
	*MEMCHR(CONST VOID *OBJECT, REGISTER INT CHARACTER, REGISTER SIZE_T LEN)
#else
VOID
	*MEMCHR(OBJECT, CHARACTER, LEN)

	CONST VOID     *(OBJECT);
	REGISTER INT (CHARACTER);
	REGISTER SIZE_T    (LEN);
#endif
{
	REGISTER SIZE_T (COUNTER) = 0;
	UNSIGNED CHAR   *(BUFFER) = (UNSIGNED CHAR *)OBJECT;

	WHILE (COUNTER < LEN)
	{
		IF (*BUFFER == (UNSIGNED CHAR)CHARACTER)
			RETURN (BUFFER);

		BUFFER++;
		COUNTER++;
	}

	RETURN (NULL);
}
