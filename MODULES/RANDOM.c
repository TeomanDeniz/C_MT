/*════════════════════════════════════════╦═════════════════════════════╗
║ C - RANDOM                              ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/02/08 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/08 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifndef __TINYC__

TYPEDEF UNION U_CAST
{
	CONST CHAR		*POINTER;
	UNSIGNED LONG	INTEGER;
}				T_CAST;

INT
	RANDOM(REGISTER INT MIN, REGISTER INT MAX)
{
	STATIC UNSIGNED LONG (ADDRESS);
	STATIC INT              (SEED);
	CHAR                 (POINTER)[8192];
	T_CAST                  (CAST);

	SEED = SEED + 0;
	IF (!SEED)
	{
		CAST.POINTER = &POINTER[SEED];
		ADDRESS = CAST.INTEGER + \
			((UNSIGNED LONG)__TIME__[0] \
			* (UNSIGNED LONG)__TIME__[1] \
			+ (UNSIGNED LONG)__TIME__[3] \
			* (UNSIGNED LONG)__TIME__[4] \
			+ (UNSIGNED LONG)__TIME__[6]) \
			* (UNSIGNED LONG)__TIME__[7];
	}

	ADDRESS = (ADDRESS * 1103515245 + 12345) & 0x7fffffff;
	SEED++;
	RETURN (MIN + (INT)((DOUBLE)ADDRESS / (0x7fffffff / (MAX - MIN + 1))));
}

#else

INT
	RANDOM(REGISTER INT MIN, REGISTER INT MAX)
{
	REGISTER LONG (SEED);

	SEED = (LONG) TIME(NULL);
	SEED = (SEED * 1103515245 + 12345) & 0x7fffffff;
	RETURN (MIN + (INT)((DOUBLE)SEED / (0x7fffffff / (MAX - MIN + 1))));
}

#endif
