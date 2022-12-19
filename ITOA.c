/*══════════════════════════════════════╦═════════════════════════════╗
║ C - ITOA                              ║       Maximum Tension       ║
╠═══════════════════════════════════════╬═════════════════════════════╣
║                                       │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                          │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                   │  ░░                      ░░ ║
║                                       │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗              │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │              │   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ ┌────────────┤   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │ 2022/11/15 │    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ YYYY/MM/DD │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩════════════╩════════════════════════════*/

#include	"#C_MT.h"

STATIC INT	CALCULATE_NUMBER_DIGITS(INT NUMBER)
{
	INT	(RESULT) = 0;
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

CHAR	*ITOA(INT NUMBER)
{
	INT (DIGITS) = CALCULATE_NUMBER_DIGITS(NUMBER);
	CHAR *(RESULT) = MALLOC((DIGITS + 1) * SIZEOF(CHAR));

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
