/*════════════════════════════════════════╦═════════════════════════════╗
║ C - PRINTF + FD                         ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/13 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifdef __STDC__
STATIC INLINE VOID
	SEND_NUMBER(INT INDEX, INT *LEN, REGISTER CHAR COMMAND, REGISTER INT FD)
#else
STATIC INLINE VOID
	SEND_NUMBER(INDEX, LEN, COMMAND, FD)

	INT             (INDEX);
	INT              *(LEN);
	REGISTER CHAR (COMMAND);
	REGISTER INT       (FD);
#endif
{
	IF (FD != 0)
	{
		IF (COMMAND == 'X' || COMMAND == 'P')
			PUT_CHAR_FD(INDEX["0123456789ABCDEF"], FD);
		ELSE
			PUT_CHAR_FD(INDEX["0123456789abcdef"], FD);
	}
	*LEN += 1;
}

#ifdef __STDC__
STATIC INLINE INT
	PF_ITOA_BASE(UNSIGNED LONG LONG NUMBER, REGISTER INT BASE, REGISTER CHAR COMMAND, REGISTER INT FD)
#else
STATIC INLINE INT
	PF_ITOA_BASE(NUMBER, BASE, COMMAND, FD)

	UNSIGNED LONG LONG (NUMBER);
	REGISTER INT         (BASE);
	REGISTER CHAR     (COMMAND);
	REGISTER INT           (FD);
#endif
{
	INT    (NUMBER_LIST)[0x1000];
	REGISTER INT (INDEX) = 0;
	INT            (LEN) = 0;

	IF (COMMAND == 'D' && (INT)NUMBER < 0)
		NUMBER *= -1;

	IF (NUMBER == 0)
	{
		LEN = 1;
		PUT_CHAR('0');
	}

	WHILE (NUMBER)
	{
		NUMBER_LIST[INDEX++] = NUMBER % BASE;
		NUMBER = NUMBER / BASE;
	}

	WHILE (INDEX--)
		SEND_NUMBER(NUMBER_LIST[INDEX], &LEN, COMMAND, FD);

	RETURN (LEN);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_ITOA_BASE_INT(UNSIGNED INT NUMBER, REGISTER INT BASE, REGISTER CHAR COMMAND, REGISTER INT FD)
#else
STATIC INLINE INT
	PF_ITOA_BASE_INT(NUMBER, BASE, COMMAND, FD)

	UNSIGNED INT   (NUMBER);
	REGISTER INT     (BASE);
	REGISTER CHAR (COMMAND);
	REGISTER INT       (FD);
#endif
{
	INT    (NUMBER_LIST)[0x1000];
	REGISTER INT (INDEX) = 0;
	INT            (LEN) = 0;

	IF ((COMMAND == 'D') && (INT)NUMBER < 0)
		NUMBER *= -1;

	IF (NUMBER == 0)
	{
		LEN = 1;
		PUT_CHAR('0');
	}

	WHILE (NUMBER)
	{
		NUMBER_LIST[INDEX++] = NUMBER % BASE;
		NUMBER = NUMBER / BASE;
	}

	WHILE (INDEX--)

		SEND_NUMBER(NUMBER_LIST[INDEX], &LEN, COMMAND, FD);
	RETURN (LEN);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_IBL(UNSIGNED LONG LONG NUMBER, REGISTER INT BASE, REGISTER CHAR COMMAND)
#else
STATIC INLINE INT
	PF_IBL(NUMBER, BASE, COMMAND)

	UNSIGNED LONG LONG (NUMBER);
	REGISTER INT         (BASE);
	REGISTER CHAR     (COMMAND);
#endif
{
	INT    (NUMBER_LIST)[0x1000];
	REGISTER INT (INDEX) = 0;
	INT            (LEN) = 0;

	(VOID)"ITOA BASE LEN (IBL)";
	IF ((COMMAND == 'D') && (INT)NUMBER < 0)
		NUMBER *= -1;

	IF (NUMBER == 0)
		LEN = 1;

	WHILE (NUMBER)
	{
		NUMBER_LIST[INDEX++] = NUMBER % BASE;
		NUMBER = NUMBER / BASE;
	}

	WHILE (INDEX--)
		SEND_NUMBER(NUMBER_LIST[INDEX], &LEN, COMMAND, 0);

	RETURN (LEN);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_IBIL(UNSIGNED INT NUMBER, REGISTER INT BASE, REGISTER CHAR COMMAND)
#else
STATIC INLINE INT
	PF_IBIL(NUMBER, BASE, COMMAND)

	UNSIGNED INT   (NUMBER);
	REGISTER INT     (BASE);
	REGISTER CHAR (COMMAND);
#endif
{
	INT    (NUMBER_LIST)[0x1000];
	REGISTER INT (INDEX) = 0;
	INT            (LEN) = 0;

	(VOID)"ITOA BASE INT LEN (IBIL)";
	IF ((COMMAND == 'D' || COMMAND == 'U') \
		&& (INT)NUMBER < 0)
		NUMBER *= -1;

	IF (NUMBER == 0)
		LEN = 1;

	WHILE (NUMBER)
	{
		NUMBER_LIST[INDEX++] = NUMBER % BASE;
		NUMBER = NUMBER / BASE;
	}

	WHILE (INDEX--)
		SEND_NUMBER(NUMBER_LIST[INDEX], &LEN, COMMAND, 0);

	RETURN (LEN);
}

#ifdef __STDC__
STATIC INLINE INT
	SIZE_CALCULATOR(REGISTER CHAR COMMAND, VOID *OBJECT, INT *FLAGS)
#else
STATIC INLINE INT
	SIZE_CALCULATOR(COMMAND, OBJECT, FLAGS)

	REGISTER CHAR (COMMAND);
	VOID          *(OBJECT);
	INT            *(FLAGS);
#endif
{
	IF (COMMAND == 'C' || COMMAND == '%')
		RETURN (1);

	IF (COMMAND == 'F')
		RETURN (PF_IBL((LONG)*(DOUBLE *)OBJECT, 10, COMMAND));

	IF (COMMAND == 'S')
	{
		IF (STRLEN((CHAR *)OBJECT) > FLAGS['.'] && FLAGS['.'] != -1)
			RETURN (FLAGS['.']);
		ELSE
			RETURN (STRLEN((CHAR *)OBJECT));
	}

	IF (COMMAND == 'U')
		RETURN (PF_IBL((UNSIGNED INT)*(UNSIGNED INT *)OBJECT, 10, COMMAND));

	IF (COMMAND == 'D')
		RETURN (PF_IBIL((INT)*(INT *)OBJECT, 10, COMMAND));

	IF (COMMAND == 'x' || COMMAND == 'X')
		RETURN (PF_IBIL((LONG LONG)*(INT *)OBJECT, 16, COMMAND));

	IF (COMMAND == 'O')
		RETURN (PF_IBIL((INT)*(INT *)OBJECT, 8, COMMAND));

	IF (COMMAND == 'b' || COMMAND == 'B')
		RETURN (PF_IBIL((INT)*(INT *)OBJECT, 2, COMMAND));

	IF (COMMAND == 'p' || COMMAND == 'P')
		RETURN (PF_IBL((LONG LONG)*(LONG *)OBJECT, 16, COMMAND));

	RETURN (-1);
}

#ifdef __STDC__
STATIC INLINE VOID
	DOT(INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	DOT(FLAGS, COMMAND)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	REGISTER INT (COUNTER) = 0;

	IF (COMMAND == 'O' && FLAGS['#'] == 1)
		COUNTER = 1;

	IF (COMMAND != 'F' && COMMAND != '%' && COMMAND != 'S')
	{
		WHILE (COUNTER < FLAGS['.'] - (FLAGS[4] + (COMMAND == 'p' || COMMAND == 'P') * 2))
		{
			WRITE(FLAGS[0], "0", 1);
			FLAGS[1] += 1;
			COUNTER++;
		}
	}

	COUNTER = 0;
	IF (COMMAND != 'F' && FLAGS['0'] && FLAGS['.'] == -1)
	{
		WHILE (COUNTER < (FLAGS[2] - (FLAGS[4] + FLAGS[3] + (COMMAND == 'p' || COMMAND == 'P') * 2)))
		{
			WRITE(FLAGS[0], "0", 1);
			FLAGS[1] += 1;
			COUNTER++;
		}
	}
}

#ifdef __STDC__
STATIC INLINE VOID
	MINUS(INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	MINUS(FLAGS, COMMAND)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	IF (!(COMMAND == 'D' || COMMAND == 'F') || !FLAGS[3])
		RETURN ;

	WRITE(FLAGS[0], "-", 1);
	FLAGS[1] += 1;
}

#ifdef __STDC__
STATIC INLINE INT
	DOT_CALCULATION(INT *FLAGS, REGISTER CHAR COMMAND, LONG LONG NUMBER)
#else
STATIC INLINE INT
	DOT_CALCULATION(FLAGS, COMMAND, NUMBER)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
	LONG LONG      (NUMBER);
#endif
{
	IF (COMMAND == 'F' && FLAGS['.'] == -1)
		RETURN (FLAGS[4] + 7);
	ELSE IF (COMMAND == 'F' && FLAGS['.'] != 0)
		RETURN (FLAGS[4] + FLAGS['.'] + 1);

	IF ((FLAGS['.']) > FLAGS[4] - (FLAGS['#'] && COMMAND == 'O' \
		&& (NUMBER != 0 && COMMAND != 'O')) && COMMAND != '%')
		RETURN (FLAGS['.']);
	ELSE
		RETURN (FLAGS[4]);
}

#ifdef __STDC__
STATIC INLINE INT
	MARGIN_CALCULATOR(INT *FLAGS, REGISTER CHAR COMMAND, LONG LONG NUMBER)
#else
STATIC INLINE INT
	MARGIN_CALCULATOR(FLAGS, COMMAND, NUMBER)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
	LONG LONG      (NUMBER);
#endif
{
	INT (CALCULATOR) = DOT_CALCULATION(FLAGS, COMMAND, NUMBER);

	IF ((COMMAND == 'D' || COMMAND == 'F') \
		&& FLAGS['+'] && !FLAGS[3])
		CALCULATOR += 1;

	IF ((COMMAND == 'D' || COMMAND == 'F') \
		&& FLAGS[3])
		CALCULATOR += 1;

	IF ((COMMAND == 'D' || COMMAND == 'F') \
		&& FLAGS[' '] && !FLAGS['+'] && !FLAGS[3])
		CALCULATOR += 1;

	IF ((((COMMAND == 'x' || COMMAND == 'X') \
		|| (COMMAND == 'b' || COMMAND == 'B')) \
		&& FLAGS['#'] && NUMBER != 0) \
		|| (COMMAND == 'p' || COMMAND == 'P'))
		CALCULATOR += 2;

	IF (COMMAND == 'O' \
		&& FLAGS['#'] && !(((FLAGS['.'] - FLAGS['0']) > FLAGS[4]) \
		|| ((FLAGS['.'] - FLAGS['0']) > FLAGS[4] && FLAGS['0'])))
		CALCULATOR += 1;

	RETURN (FLAGS[2] - CALCULATOR);
}

#ifdef __STDC__
STATIC INLINE VOID
	MARGIN(INT *FLAGS, REGISTER CHAR COMMAND, REGISTER CHAR POSITION, LONG LONG NUMBER)
#else
STATIC INLINE VOID
	MARGIN(FLAGS, COMMAND, POSITION, NUMBER)

	INT             *(FLAGS);
	REGISTER CHAR  (COMMAND);
	REGISTER CHAR (POSITION);
	LONG LONG       (NUMBER);
#endif
{
	REGISTER INT (COUNTER) = 0;

	IF (POSITION == 'A' && FLAGS['0'] && FLAGS['.'] == -1)
		RETURN ;

	WHILE (COUNTER < MARGIN_CALCULATOR(FLAGS, COMMAND, NUMBER))
	{
		WRITE(FLAGS[0], " ", 1);
		FLAGS[1] += 1;
		COUNTER++;
	}
}

#ifdef __STDC__
STATIC INLINE VOID
	PLUS(INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	PLUS(FLAGS, COMMAND)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	IF (!(COMMAND == 'D' || COMMAND == 'F') \
		|| !FLAGS['+'] || FLAGS[3])
		RETURN ;

	WRITE(FLAGS[0], "+", 1);
	FLAGS[1] += 1;
}

#ifdef __STDC__
STATIC INLINE VOID
	SPACE(INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	SPACE(FLAGS, COMMAND)

	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	IF (!(COMMAND == 'D' || COMMAND == 'F') \
		|| !FLAGS[' '] || FLAGS['+'] || FLAGS[3])
		RETURN ;

	WRITE(FLAGS[0], " ", 1);
	FLAGS[1] += 1;
}

#ifdef __STDC__
STATIC INLINE VOID
	SQUARE(INT *FLAGS, CHAR COMMAND, LONG LONG NUMBER)
#else
STATIC INLINE VOID
	SQUARE(FLAGS, COMMAND, NUMBER)

	INT       *(FLAGS);
	CHAR     (COMMAND);
	LONG LONG (NUMBER);
#endif
{
	IF (COMMAND == 'p')
	{
		WRITE(FLAGS[0], "0x", 2);
		FLAGS[1] += 2;
	}

	IF (COMMAND == 'P')
	{
		WRITE(FLAGS[0], "0X", 2);
		FLAGS[1] += 2;
	}

	IF (!(COMMAND == 'O' \
		|| (COMMAND == 'x' || COMMAND == 'X') \
		|| (COMMAND == 'b' || COMMAND == 'B')) \
		|| !FLAGS['#'] || (FLAGS[2] > FLAGS[4] + FLAGS['#'] && FLAGS['0'] \
		&& FLAGS['.'] == -1 && !FLAGS['-']) \
		|| (NUMBER == 0 && COMMAND != 'O'))
		RETURN ;

	IF ((COMMAND == 'x' || COMMAND == 'X') \
		|| (COMMAND == 'b' || COMMAND == 'B'))
	{
		WRITE(FLAGS[0], "0", 1);
		WRITE(FLAGS[0], &COMMAND, 1);
		FLAGS[1] += 2;
		RETURN ;
	}

	WRITE(FLAGS[0], "0", 1);
	FLAGS[1] += 1;
}

#ifdef __STDC__
STATIC INLINE VOID
	PF_FLAG_EVENT(INT *FLAGS, REGISTER CHAR COMMAND, VOID *OBJECT, REGISTER CHAR POSITION)
#else
STATIC INLINE VOID
	PF_FLAG_EVENT(FLAGS, COMMAND, OBJECT, POSITION)

	INT             *(FLAGS);
	REGISTER CHAR  (COMMAND);
	VOID           *(OBJECT);
	REGISTER CHAR (POSITION);
#endif
{
	FLAGS[4] = SIZE_CALCULATOR(COMMAND, OBJECT, FLAGS);
	IF (POSITION == 'A')
	{
		IF (!FLAGS['-'])
			MARGIN(FLAGS, COMMAND, POSITION, (LONG LONG)*(INT *)OBJECT);

		MINUS(FLAGS, COMMAND);
		PLUS(FLAGS, COMMAND);
		SQUARE(FLAGS, COMMAND, (LONG LONG)*(INT *)OBJECT);
		SPACE(FLAGS, COMMAND);
		DOT(FLAGS, COMMAND);
	}

	IF (POSITION == 'B' && FLAGS['-'] == 1)
		MARGIN(FLAGS, COMMAND, POSITION, (LONG LONG)*(INT *)OBJECT);

	FLAGS[4] = 0;
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__B(INT NUMBER, INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	PF__B(NUMBER, FLAGS, COMMAND)

	INT            (NUMBER);
	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	PF_FLAG_EVENT(FLAGS, COMMAND, (VOID *)&NUMBER, 'A');
	FLAGS[1] += PF_ITOA_BASE_INT(NUMBER, 2, COMMAND, FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, COMMAND, (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__C(INT CHARACTER, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__C(INT CHARACTER, INT *FLAGS)

	INT (CHARACTER);
	INT    *(FLAGS);
#endif
{
	INT *(DUMMY_POINTER) = &CHARACTER;

	PF_FLAG_EVENT(FLAGS, 'C', DUMMY_POINTER, 'A');
	WRITE(FLAGS[0], &CHARACTER, 1);
	FLAGS[1] += 1;
	PF_FLAG_EVENT(FLAGS, 'C', DUMMY_POINTER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__D(INT NUMBER, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__D(NUMBER, FLAGS)

	INT (NUMBER);
	INT *(FLAGS);
#endif
{
	IF (NUMBER < 0)
		FLAGS[3] = 1;

	PF_FLAG_EVENT(FLAGS, 'D', (VOID *)&NUMBER, 'A');
	FLAGS[1] += PF_ITOA_BASE_INT(NUMBER, 10, 'D', FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, 'D', (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE LONG
	ZERO_COUNTER(DOUBLE NUMBER, INT *FLAGS, REGISTER INT COUNTER)
#else
STATIC INLINE LONG
	ZERO_COUNTER(NUMBER, FLAGS, COUNTER)

	DOUBLE        (NUMBER);
	INT           *(FLAGS);
	REGISTER INT (COUNTER);
#endif
{
	REGISTER LONG (ZEROS_AT_START) = -1;
	REGISTER INT   (WHILE_STOPPER) = 0;
	REGISTER LONG        (INTEGER) = 0;

	NUMBER *= 10;
	INTEGER = (LONG)NUMBER;
	WHILE (WHILE_STOPPER == 0 && (ZEROS_AT_START + FLAGS[1]) < (FLAGS[1] + FLAGS['.']))
	{
		IF (INTEGER % 10 != 0)
			WHILE_STOPPER = 1;

		ZEROS_AT_START += 1;
		INTEGER = (LONG)NUMBER;
		NUMBER *= 10;
	}

	WHILE (COUNTER++ <= ZEROS_AT_START - WHILE_STOPPER)
	{
		FLAGS[1] += 1;
		PUT_CHAR_FD('0', FLAGS[0]);
	}

	RETURN (WHILE_STOPPER);
}

#ifdef __STDC__
STATIC INLINE LONG
	GET_FRACTION(LONG INTEGER, DOUBLE NUMBER, INT *FLAGS)
#else
STATIC INLINE LONG
	GET_FRACTION(INTEGER, NUMBER, FLAGS)

	LONG  (INTEGER);
	DOUBLE (NUMBER);
	INT    *(FLAGS);
#endif
{
	IF (FLAGS['.'] == -1)
		FLAGS['.'] = 6;

	IF (NUMBER - INTEGER == 0)
		RETURN (-1);

	RETURN (ABS((LONG)((NUMBER - INTEGER) * (INT)POW(10, FLAGS['.']))));
}

#ifdef __STDC__
STATIC INLINE VOID
	F_MAIN(DOUBLE NUMBER, INT *FLAGS)
#else
STATIC INLINE VOID
	F_MAIN(NUMBER, FLAGS)

	DOUBLE (NUMBER);
	INT    *(FLAGS);
#endif
{
	LONG        (FRACTION) = 0;
	LONG         (INTEGER) = (LONG)NUMBER;
	REGISTER INT (CHECKER) = 0;

	PUT_NUMBER_FD(INTEGER, FLAGS[0]);
	IF (FLAGS['.'] != 0)
	{
		FRACTION = GET_FRACTION(INTEGER, NUMBER, FLAGS);
		IF (FRACTION % 10 == 9)
			FRACTION += 1;

		PUT_CHAR_FD('.', FLAGS[0]);
		CHECKER = ZERO_COUNTER(NUMBER, FLAGS, 1);
		IF (FRACTION != -1 && CHECKER == 1)
			PUT_NUMBER_FD(FRACTION, FLAGS[0]);

		FLAGS[1] += STRLEN(ITOA(INTEGER)) + STRLEN(ITOA(ABS(FRACTION)));
	}
	ELSE
		FLAGS[1] += STRLEN(ITOA(INTEGER));
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__F(DOUBLE NUMBER, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__F(NUMBER, FLAGS)

	DOUBLE (NUMBER);
	INT    *(FLAGS);
#endif
{
	PF_FLAG_EVENT(FLAGS, 'F', (VOID *)&NUMBER, 'A');
	F_MAIN(NUMBER, FLAGS);
	PF_FLAG_EVENT(FLAGS, 'F', (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__N(INT *VARIABLE, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__N(VARIABLE, FLAGS)

	INT *(VARIABLE);
	INT    *(FLAGS);
#endif
{
	*VARIABLE = (INT)1[FLAGS];
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__O(INT NUMBER, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__O(NUMBER, FLAGS)

	INT (NUMBER);
	INT *(FLAGS);
#endif
{
	PF_FLAG_EVENT(FLAGS, 'O', (VOID *)&NUMBER, 'A');
	FLAGS[1] += PF_ITOA_BASE_INT(NUMBER, 8, 'O', FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, 'O', (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__P(UNSIGNED LONG LONG ADDRESS, INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	PF__P(ADDRESS, FLAGS, COMMAND)

	UNSIGNED LONG LONG (ADDRESS);
	INT                 *(FLAGS);
	REGISTER CHAR      (COMMAND);
#endif
{
	PF_FLAG_EVENT(FLAGS, COMMAND, (VOID *)&ADDRESS, 'A');
	FLAGS[1] += PF_ITOA_BASE(ADDRESS, 16, COMMAND, FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, COMMAND, (VOID *)&ADDRESS, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__PERC(INT *FLAGS)
#else
STATIC INLINE VOID
	PF__PERC(FLAGS)

	INT *(FLAGS);
#endif
{
	CHAR *(DUMMY_POINTER) = "%";

	PF_FLAG_EVENT(FLAGS, '%', (VOID *)DUMMY_POINTER, 'A');
	WRITE(FLAGS[0], "%", 1);
	FLAGS[1] += 1;
	PF_FLAG_EVENT(FLAGS, '%', (VOID *)DUMMY_POINTER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__S(CHAR *__STRING__, INT *FLAGS, REGISTER CHAR COMMAND)
#else
STATIC INLINE VOID
	PF__S(__STRING__, FLAGS, COMMAND)

	CHAR      *(__STRING__);
	INT            *(FLAGS);
	REGISTER CHAR (COMMAND);
#endif
{
	REGISTER INT  (COUNTER) = 0;
	CHAR          *(STRING) = __STRING__;

	IF (!STRING)
	{
		IF (COMMAND == 'S')
			WRITE(FLAGS[0], "(NULL)", 6);
		ELSE
			WRITE(FLAGS[0], "(null)", 6);
		FLAGS[1] += 6;
		RETURN ;
	}

	PF_FLAG_EVENT(FLAGS, 'S', (VOID *)STRING, 'A');
	IF (FLAGS['.'] == -1)
	{
		FLAGS[1] += STRLEN(STRING);
		WRITE(FLAGS[0], STRING, STRLEN(STRING));
	}
	ELSE
	{	
		WHILE (STRING[COUNTER] && COUNTER < FLAGS['.'])
		{
			FLAGS[1] += 1;
			WRITE(FLAGS[0], &STRING[COUNTER++], 1);
		}
	}

	PF_FLAG_EVENT(FLAGS, 'S', (VOID *)STRING, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__U(UNSIGNED LONG NUMBER, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__U(NUMBER, FLAGS)

	UNSIGNED LONG (NUMBER);
	INT           *(FLAGS);
#endif
{
	PF_FLAG_EVENT(FLAGS, 'U', (VOID *)&NUMBER, 'A');
	FLAGS[1] += PF_ITOA_BASE(NUMBER, 10, 'u', FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, 'U', (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE VOID
	PF__X(INT NUMBER, CHAR KEYWORD, INT *FLAGS)
#else
STATIC INLINE VOID
	PF__X(NUMBER, KEYWORD, FLAGS)

	INT   (NUMBER);
	CHAR (KEYWORD);
	INT   *(FLAGS);
#endif
{
	PF_FLAG_EVENT(FLAGS, KEYWORD, (VOID *)&NUMBER, 'A');
	FLAGS[1] += PF_ITOA_BASE_INT(NUMBER, 16, KEYWORD, FLAGS[0]);
	PF_FLAG_EVENT(FLAGS, KEYWORD, (VOID *)&NUMBER, 'B');
}

#ifdef __STDC__
STATIC INLINE INT
	PF_SET_FLAGS(INT *FLAGS)
#else
STATIC INLINE INT
	PF_SET_FLAGS(FLAGS)

	INT *(FLAGS);
#endif
{
	FLAGS['+'] = 0;
	FLAGS[' '] = 0;
	FLAGS['#'] = 0;
	FLAGS['0'] = 0;
	FLAGS['-'] = 0;
	FLAGS['.'] = -1;
	FLAGS['1'] = 0;
	FLAGS['2'] = 0;
	FLAGS['3'] = 0;
	FLAGS['4'] = 0;
	FLAGS['5'] = 0;
	FLAGS['6'] = 0;
	FLAGS['7'] = 0;
	FLAGS['8'] = 0;
	FLAGS['9'] = 0;
	FLAGS[4] = 0;
	FLAGS[3] = 0;
	FLAGS[2] = 0;
	RETURN (0);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_PERC_CHECK(CONST CHAR *(__), REGISTER INT X)
#else
STATIC INLINE INT
	PF_PERC_CHECK((__), X)

	CONST CHAR *(__);
	REGISTER INT (X);
#endif
{
	IF ((__)[X] == '+' || (__)[X] == '-' \
		|| (__)[X] == '.' || (__)[X] == '*' \
		|| (__)[X] == '#' || (__)[X] == ' ' \
		|| (__)[X] == '0' || (__)[X] == '1' \
		|| (__)[X] == '2' || (__)[X] == '3' \
		|| (__)[X] == '4' || (__)[X] == '5' \
		|| (__)[X] == '6' || (__)[X] == '7' \
		|| (__)[X] == '8' || (__)[X] == '9' \
		|| ((__)[X] == 'd' || (__)[X] == 'D') \
		|| ((__)[X] == 'i' || (__)[X] == 'I') \
		|| ((__)[X] == 'x' || (__)[X] == 'X') \
		|| ((__)[X] == 'o' || (__)[X] == 'O') \
		|| ((__)[X] == 'b' || (__)[X] == 'B') \
		|| ((__)[X] == 'c' || (__)[X] == 'C') \
		|| ((__)[X] == 's' || (__)[X] == 'S') \
		|| ((__)[X] == 'p' || (__)[X] == 'P') \
		|| ((__)[X] == 'u' || (__)[X] == 'U') \
		|| ((__)[X] == 'f' || (__)[X] == 'F') \
		|| ((__)[X] == 'n' || (__)[X] == 'N') \
		|| (__)[X] == '%')
		RETURN ((SIGNED INT)(__)[X]);

	IF ((__)[X] == 0)
		RETURN (0);

	RETURN (-1);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_IS_FLAG_VALID(CONST CHAR *(__), REGISTER INT X, REGISTER INT RESET_FLAGS, INT *FLAGS)
#else
STATIC INLINE INT
	PF_IS_FLAG_VALID((__), X, RESET_FLAGS, FLAGS)

	CONST CHAR           *(__);
	REGISTER INT           (X);
	REGISTER INT (RESET_FLAGS);
	INT               *(FLAGS);
#endif
{
	REGISTER INT (WHILE_LOOP) = PF_PERC_CHECK((__), X++);

	WHILE (WHILE_LOOP < '@' && WHILE_LOOP != -1 \
		&& WHILE_LOOP != '%' && WHILE_LOOP != 0)
	{
		FLAGS[WHILE_LOOP] = 1;
		WHILE_LOOP = PF_PERC_CHECK((__), X);
		X += 1;
	}

	IF (RESET_FLAGS == 1)
		PF_SET_FLAGS(FLAGS);

	IF (WHILE_LOOP == -1)
		RETURN (-1);

	IF (WHILE_LOOP > '@' || WHILE_LOOP == '%')
		RETURN (X);

	RETURN (0);
}

#ifdef __STDC__
STATIC INLINE INT
	GET_STAR(INT *FLAGS, VA_LIST *VA_ARGS)
#else
STATIC INLINE INT
	GET_STAR(FLAGS, VA_ARGS)

	INT       *(FLAGS);
	VA_LIST *(VA_ARGS);
#endif
{
	REGISTER INT (STAR_VALUE) = VA_ARG(*VA_ARGS, INT);

	IF (STAR_VALUE < 0)
		FLAGS['-'] = 1;

	RETURN (ABS(STAR_VALUE));
}

#ifdef __STDC__
STATIC INLINE INT
	GET_NUMBER(CONST CHAR *(__), INT *X)
#else
STATIC INLINE INT
	GET_NUMBER((__), X)

	CONST CHAR *(__);
	INT         *(X);
#endif
{
	CHAR          (RESULT)[8192];
	REGISTER INT (COUNTER) = 0;

	IF ((__)[*X] >= '0' && (__)[*X] <= '9')
	{
		WHILE ((__)[*X] >= '0' && (__)[*X] <= '9')
		{
			RESULT[COUNTER++] = (__)[*X];
			*X += 1;
		}

		RESULT[COUNTER] = '\0';
		RETURN (ATOI(RESULT));
	}

	RETURN (0);
}

#ifdef __STDC__
STATIC INLINE VOID
	MARGIN_CHECKER(CONST CHAR *(__), INT *X, INT *FLAGS)
#else
STATIC INLINE VOID
	MARGIN_CHECKER((__), X, FLAGS)

	CONST CHAR *(__);
	INT         *(X);
	INT     *(FLAGS);
#endif
{
	IF ((__)[*X] >= '1' && (__)[*X] <= '9')
		FLAGS[2] = GET_NUMBER((__), X);
	ELSE
		FLAGS[2] = 0;
}

#ifdef __STDC__
STATIC INLINE VOID
	DOT_CHECKER(CONST CHAR *(__), INT *X, INT *FLAGS, VA_LIST *VA_ARGS)
#else
STATIC INLINE VOID
	DOT_CHECKER((__), X, FLAGS, VA_ARGS)

	CONST CHAR   *(__);
	INT           *(X);
	INT       *(FLAGS);
	VA_LIST *(VA_ARGS);
#endif
{
	*X += 1;
	IF ((__)[*X] == '*')
	{
		FLAGS['.'] = GET_STAR(FLAGS, VA_ARGS);
		*X += 1;
		RETURN ;
	}

	WHILE ((__)[*X] == '0')
		*X += 1;

	IF ((__)[*X] >= '1' && (__)[*X] <= '9')
		FLAGS['.'] = GET_NUMBER((__), X);
	ELSE
		FLAGS['.'] = 0;
}

#ifdef __STDC__
STATIC INLINE VOID
	PF_FLAG_COLLECTOR(CONST CHAR *(__), INT *X, INT *FLAGS, VA_LIST *VA_ARGS)
#else
STATIC INLINE VOID
	PF_FLAG_COLLECTOR((__), X, FLAGS, VA_ARGS)

	CONST CHAR   *(__);
	INT           *(X);
	INT       *(FLAGS);
	VA_LIST *(VA_ARGS);
#endif
{
	REGISTER INT (FLAG) = 0;

	*X += 1;
	FLAG = PF_PERC_CHECK((__), *X);
	WHILE (FLAG != 0 && FLAG != -1 && FLAG != '%' && FLAG < '@')
	{
		IF (FLAG == '+' || FLAG == '-' || FLAG == ' ' || FLAG == '#' || FLAG == '0')
		{
			FLAGS[(INT)FLAG] = 1;
			*X += 1;
		}

		IF (FLAG == '*')
		{
			FLAGS[2] = GET_STAR(FLAGS, VA_ARGS);
			*X += 1;
		}

		IF (FLAG == '.')
			DOT_CHECKER((__), X, FLAGS, VA_ARGS);

		IF (FLAG >= '1' && FLAG <= '9')
			MARGIN_CHECKER((__), X, FLAGS);

		FLAG = PF_PERC_CHECK((__), *X);
	}
}

#ifdef __STDC__
STATIC INLINE VOID
	PF_DO_COMMAND(VA_LIST *VA_ARGS, CONST CHAR *(__), REGISTER INT X, INT *FLAGS)
#else
STATIC INLINE VOID
	PF_DO_COMMAND(VA_ARGS, (__), X, FLAGS)

	VA_LIST *(VA_ARGS);
	CONST CHAR   *(__);
	REGISTER INT   (X);
	INT       *(FLAGS);
#endif
{
	IF ((__)[X] == 's' || (__)[X] == 'S')
		PF__S(VA_ARG(*VA_ARGS, CHAR *), FLAGS, (__)[X]);
	ELSE IF ((__)[X] == 'c' || (__)[X] == 'C')
		PF__C(VA_ARG(*VA_ARGS, INT), FLAGS);
	ELSE IF (((__)[X] == 'd' || (__)[X] == 'D') \
		|| ((__)[X] == 'i' || (__)[X] == 'I'))
		PF__D(VA_ARG(*VA_ARGS, INT), FLAGS);
	ELSE IF ((__)[X] == 'p' || (__)[X] == 'P')
		PF__P(VA_ARG(*VA_ARGS, UNSIGNED LONG LONG), FLAGS, (__)[X]);
	ELSE IF ((__)[X] == 'u' || (__)[X] == 'U')
		PF__U(VA_ARG(*VA_ARGS, UNSIGNED INT), FLAGS);
	ELSE IF ((__)[X] == 'x' || (__)[X] == 'X')
		PF__X(VA_ARG(*VA_ARGS, UNSIGNED INT), (__)[X], FLAGS);
	ELSE IF ((__)[X] == 'o' || (__)[X] == 'O')
		PF__O(VA_ARG(*VA_ARGS, UNSIGNED INT), FLAGS);
	ELSE IF ((__)[X] == 'b' || (__)[X] == 'B')
		PF__B(VA_ARG(*VA_ARGS, UNSIGNED INT), FLAGS, (__)[X]);
	ELSE IF ((__)[X] == '%')
		PF__PERC(FLAGS);
	ELSE IF ((__)[X] == 'f' || (__)[X] == 'F')
		PF__F(VA_ARG(*VA_ARGS, DOUBLE), FLAGS);
	ELSE IF ((__)[X] == 'n' || (__)[X] == 'N')
		PF__N(VA_ARG(*VA_ARGS, INT *), FLAGS);
}

#ifdef __STDC__
STATIC INLINE INT
	PF_PERC(CONST CHAR *(__), INT X, VA_LIST *VA_ARGS, INT *FLAGS)
#else
STATIC INLINE INT
	PF_PERC((__), X, VA_ARGS, FLAGS)

	CONST CHAR   *(__);
	INT            (X);
	VA_LIST *(VA_ARGS);
	INT       *(FLAGS);
#endif
{
	REGISTER INT (TEST) = PF_IS_FLAG_VALID((__), (X + 1), 1, FLAGS);

	PF_FLAG_COLLECTOR((__), &X, FLAGS, VA_ARGS);
	IF (TEST != 0 && TEST != -1)
	{
		X++;
		PF_DO_COMMAND(VA_ARGS, (__), (X - 1), FLAGS);
	}

	IF (TEST == -1)
		X -= 1;

	PF_SET_FLAGS(FLAGS);
	RETURN (X);
}

#ifdef __STDC__
INT
	PRINTF(CONST CHAR *(__), ...)
#else
INT
	PRINTF((__), VA_ARGS)

	CONST CHAR  *(__);
	VA_LIST (VA_ARGS);
#endif
{
	INT        (FLAGS)[256];
	REGISTER INT   (X) = PF_SET_FLAGS(FLAGS);

#ifdef __STDC__

	VA_LIST (VA_ARGS);

#endif

	FLAGS[1] = 0;
	FLAGS[0] = 1;

#ifdef __STDC__

	VA_START(VA_ARGS, (__));

#endif

	WHILE ((__)[X] != '\0')
	{
		IF ((__)[X] == '%')
		{
			X = PF_PERC((__), X, &VA_ARGS, FLAGS);
			IF (X == -1 || (__)[X] == '\0' || (__)[X - 1] == '\0')
				BREAK ;

			CONTINUE ;
		}
		ELSE
		{
			FLAGS[1] += 1;
			WRITE(FLAGS[0], &(__)[X], 1);
		}

		X++;
	}

#ifdef __STDC__

	VA_END(VA_ARGS);

#endif

	RETURN (FLAGS[1]);
}

#ifdef __STDC__
INT
	PRINTF_FD(REGISTER INT FD, CONST CHAR *(__), ...)
#else
INT
	PRINTF_FD(FD, (__), VA_ARGS)

	REGISTER INT (FD);
	CONST CHAR  *(__);
	VA_LIST (VA_ARGS);
#endif
{
	INT        (FLAGS)[256];
	REGISTER INT   (X) = PF_SET_FLAGS(FLAGS);

#ifdef __STDC__

	VA_LIST (VA_ARGS);

#endif

	FLAGS[1] = 0;
	FLAGS[0] = FD;

#ifdef __STDC__

	VA_START(VA_ARGS, (__));

#endif

	WHILE ((__)[X] != '\0')
	{
		IF ((__)[X] == '%')
		{
			X = PF_PERC((__), X, &VA_ARGS, FLAGS);
			IF (X == -1 || (__)[X] == '\0' || (__)[X - 1] == '\0')
				BREAK ;

			CONTINUE ;
		}
		ELSE
		{
			FLAGS[1] += 1;
			WRITE(FLAGS[0], &(__)[X], 1);
		}

		X++;
	}

#ifdef __STDC__

	VA_END(VA_ARGS);

#endif

	RETURN (FLAGS[1]);
}
