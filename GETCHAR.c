/*══════════════════════════════════════╦═════════════════════════════╗
║ C - GETCHAR                           ║       Maximum Tension       ║
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
	INT (INPUT) = 0;

	__ASM__ __VOLATILE__ (
		"mov $0, %%eax\n\t"
		"mov $0, %%ebx\n\t"
		"int $0x80\n\t"
		"mov %%eax, %0\n\t"
		: "=r" (INPUT)
		:
		: "memory"
	);

	RETURN (INPUT);
}
# endif

#else

# include	<stdio.h>
# define GETCHAR getchar

#endif
