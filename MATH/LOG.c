/*════════════════════════════════════════╦═════════════════════════════╗
║ C - LOG                                 ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/02/19 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/19 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
DOUBLE
	LOG(REGISTER DOUBLE X)
#else
DOUBLE
	LOG(X)

	REGISTER DOUBLE (X);
#endif
{
	REGISTER INT (COUNTER) = 0;
	REGISTER DOUBLE    (Z) = ((X - 1) / (X + 1)) * ((X - 1) / (X + 1));
	REGISTER DOUBLE  (SUM) = (X - 1) / (X + 1);
	REGISTER DOUBLE (TERM) = (X - 1) / (X + 1);

	WHILE (++COUNTER, FABS(TERM / (2 * COUNTER)) > 1E-15)
	{
		TERM *= Z;
		SUM += TERM / (2 * COUNTER + 1);
	}

	RETURN (2 * SUM);
}
