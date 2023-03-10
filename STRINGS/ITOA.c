/*════════════════════════════════════════╦═════════════════════════════╗
║ C - ITOA                                ║       Maximum Tension       ║
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
STATIC INLINE INT
	CALCULATE_NUMBER_DIGITS(REGISTER INT NUMBER)
#else
STATIC INLINE INT
	CALCULATE_NUMBER_DIGITS(NUMBER)

	REGISTER INT (NUMBER);
#endif
{
	REGISTER INT (RESULT) = 0;

	IF (NUMBER < 0)
	{
		RESULT++;
		NUMBER *= -1;
	}
	ELSE IF (NUMBER == 0)
		RETURN (1);

	WHILE (0 < NUMBER)
	{
		RESULT++;
		NUMBER = NUMBER / 10;
	}

	RETURN (RESULT);
}

#ifdef __STDC__
CHAR
	*ITOA(REGISTER INT NUMBER)
#else
CHAR
	*ITOA(NUMBER)

	REGISTER INT (NUMBER);
#endif
{
	REGISTER INT (DIGITS) = CALCULATE_NUMBER_DIGITS(NUMBER);
	CHAR        *(RESULT) = MALLOC((DIGITS + 1) * SIZEOF(CHAR));

	IF (NUMBER == 0)
		RESULT[0] = 48;

	IF (RESULT == NULL)
		RETURN (NULL);

	IF (NUMBER < 0)
	{
		RESULT[0] = '-';
		NUMBER *= -1;
	}

	RESULT[DIGITS] = '\0';

	WHILE ((DIGITS - 1) >= 0 && NUMBER > 0)
	{	
		RESULT[DIGITS - 1] = (NUMBER % 10) + '0';
		NUMBER = NUMBER / 10;
		DIGITS--;
	}

	RETURN (RESULT);
}
