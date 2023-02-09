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
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifndef __TINYC__

# ifdef _WIN32

#  ifdef __STDC__
INT
	GETCHAR(VOID)
#  else
INT
	GETCHAR()
#  endif
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

#  ifdef __STDC__
INT
	GETCHAR(VOID)
#  else
INT
	GETCHAR()
#  endif
{
	CHAR (CHARACTER);
	READ(0, &CHARACTER, 1);
	RETURN (CHARACTER);
}

# endif

#else

# ifdef __STDC__
INT
	GETCHAR(VOID)
# else
INT
	GETCHAR()
# endif
{
	CHAR (CHARACTER);
	READ(0, &CHARACTER, 1);
	RETURN (CHARACTER);
}

#endif
