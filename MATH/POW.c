/*════════════════════════════════════════╦═════════════════════════════╗
║ C - POW                                 ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/18 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/18 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

LONG LONG
	POW_INT(REGISTER LONG LONG NUMBER, REGISTER SIGNED INT POWER)
{
	REGISTER VOLATILE SIGNED INT (COUNTER) = 1;
	REGISTER VOLATILE LONG LONG        (X) = NUMBER;

	IF (POWER < 0 || NUMBER == 0)
		RETURN (0);

	IF (POWER == 0)
		RETURN (1);

	WHILE (COUNTER++ < POWER)
		NUMBER = NUMBER * X;

	RETURN (NUMBER);
}

DOUBLE
	POW(DOUBLE NUMBER, REGISTER SIGNED INT POWER)
{
	VOLATILE SIGNED INT (COUNTER) = 1;
	VOLATILE DOUBLE           (X) = NUMBER;

	IF (POWER < 0 || NUMBER == 0)
		RETURN (0);

	IF (POWER == 0)
		RETURN (1);

	WHILE (COUNTER++ < POWER)
		NUMBER = NUMBER * X;

	RETURN (NUMBER);
}
