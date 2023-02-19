/*════════════════════════════════════════╦═════════════════════════════╗
║ C - ATOF                                ║       Maximum Tension       ║
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
STATIC INLINE INT
	NUMBER_LEN(REGISTER INT NUMBER)
#else
STATIC INLINE INT
	NUMBER_LEN(NUMBER)

	REGISTER INT NUMBER;
#endif
{
	REGISTER INT (COUNTER) = -1;

	WHILE (++COUNTER, NUMBER)
		NUMBER /= 10;
	RETURN (COUNTER);
}

#ifdef __STDC__
DOUBLE
	ATOF(CONST CHAR *RESTRICT STRING)
#else
DOUBLE
	ATOF(STRING)

	CONST CHAR *STRING;
#endif
{
	REGISTER INT (FRICTION) = 1;
	REGISTER INT  (INTEGER) = 0;
	REGISTER DOUBLE  (SIGN) = 1;
	REGISTER INT        (X) = 0;

	WHILE (STRING[X] == ' ' || (STRING[X] <= 13 && STRING[X] >= 9))
		X++;

	IF (STRING[X] == '-')
	{
		SIGN *= -1;
		X++;
	}

	WHILE (++X, STRING[X - 1] != '.' && STRING[X - 1] && STRING[X - 1] >= '0' && STRING[X - 1] <= '9')
		INTEGER = (10 * INTEGER) + (STRING[X - 1] & 0B1111);

	WHILE (++X, STRING[X - 1] && STRING[X - 1] >= '0' && STRING[X - 1] <= '9')
		FRICTION = (10 * FRICTION) + (STRING[X - 1] & 0B1111);

	X = NUMBER_LEN(FRICTION) - 1;

	IF (--FRICTION, FRICTION == 0)
		RETURN ((DOUBLE)INTEGER * SIGN);

	RETURN ((((DOUBLE)INTEGER) + ((DOUBLE)FRICTION / POW(10, X))) * SIGN);
}
