/*════════════════════════════════════════╦═════════════════════════════╗
║ C - GETCHAR                             ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2022/12/07 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/13 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifndef __TINYC__
# ifdef _WIN32
INT
	GETCHAR(VOID)
{
	INT (INPUT) = 0;
	__ASM__ __VOLATILE__ (
		"call _getch\n\t"
		"mov %%eax, %0\n\t"
		: "=r" (INPUT)
		:
		: "memory"
	);
	RETURN (INPUT);
}
# else
INT
	GETCHAR(VOID)
{
	CHAR (CHARACTER);
	READ(0, &CHARACTER, 1);
	RETURN (CHARACTER);
}
# endif

#else
INT
	GETCHAR(VOID)
{
	CHAR (CHARACTER);
	READ(0, &CHARACTER, 1);
	RETURN (CHARACTER);
}
#endif
