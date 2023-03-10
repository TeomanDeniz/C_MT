/*════════════════════════════════════════╦═════════════════════════════╗
║ C - GET_LINE                            ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/07 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/09 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif

#ifdef __STDC__
STATIC INLINE CHAR
	*GL_STRCHR(CHAR *STRING, REGISTER INT CHARACTER)
#else
STATIC INLINE CHAR
	*GL_STRCHR(STRING, CHARACTER)

	CHAR           *(STRING);
	REGISTER INT (CHARACTER);
#endif
{
	REGISTER SIGNED INT (COUNTER) = 0;

	IF (!STRING)
		RETURN (0X00);

	IF (CHARACTER == '\0')
		RETURN ((CHAR *) &STRING[STRLEN(STRING)]);

	WHILE (COUNTER[STRING] != '\0')
	{
		IF (COUNTER[STRING] == (CHAR) CHARACTER)
			RETURN ((CHAR *) &STRING[COUNTER]);

		COUNTER++;
	}

	RETURN (0X00);
}

#ifdef __STDC__
STATIC INLINE CHAR
	*GL_STRJOIN(CHAR *STRING_NEWLINE, CHAR *RESTRICT BUFFER)
#else
STATIC INLINE CHAR
	*GL_STRJOIN(STRING_NEWLINE, BUFFER)

	CHAR  *(STRING_NEWLINE);
	CHAR *RESTRICT (BUFFER);
#endif
{
	REGISTER VOLATILE SIZE_T (C1) = -1;
	REGISTER VOLATILE SIZE_T (C2) = 0;
	CHAR                *(STRING);

	IF (!STRING_NEWLINE)
	{
		STRING_NEWLINE = (CHAR *) MALLOC(0X1 * SIZEOF(CHAR));
		0[STRING_NEWLINE] = '\0';
	}

	IF (!STRING_NEWLINE || !BUFFER)
		RETURN (NULL);

	STRING = (CHAR *) MALLOC(SIZEOF(CHAR) * ((STRLEN(STRING_NEWLINE) + STRLEN(BUFFER)) + 1));

	IF (STRING == NULL)
		RETURN (NULL);

	IF (STRING_NEWLINE)
		WHILE (STRING_NEWLINE[++C1] != '\0')
			STRING[C1] = STRING_NEWLINE[C1];

	WHILE (BUFFER[C2] != '\0')
		STRING[C1++] = BUFFER[C2++];

	STRING[STRLEN(STRING_NEWLINE) + STRLEN(BUFFER)] = '\0';
	FREE(STRING_NEWLINE);
	RETURN (STRING);
}

#ifdef __STDC__
STATIC INLINE CHAR
	*GL_GET_THE_NEXT_LINE(CHAR *STRING_NEWLINE)
#else
STATIC INLINE CHAR
	*GL_GET_THE_NEXT_LINE(STRING_NEWLINE)

	CHAR *(STRING_NEWLINE);
#endif
{
	REGISTER VOLATILE SIGNED INT (COUNTER) = 0;
	CHAR                         *(STRING);

	IF (!STRING_NEWLINE[COUNTER])
		RETURN (NULL);

	WHILE (STRING_NEWLINE[COUNTER] && STRING_NEWLINE[COUNTER] != '\n')
		COUNTER++;

	STRING = (CHAR *) MALLOC(SIZEOF(CHAR) * (COUNTER + 2));

	IF (!STRING)
		RETURN (NULL);

	COUNTER = 0;

	WHILE (STRING_NEWLINE[COUNTER] && STRING_NEWLINE[COUNTER] != '\n')
	{
		STRING[COUNTER] = STRING_NEWLINE[COUNTER];
		COUNTER++;
	}

	IF (STRING_NEWLINE[COUNTER] == '\n')
	{
		STRING[COUNTER] = STRING_NEWLINE[COUNTER];
		COUNTER++;
	}

	STRING[COUNTER] = '\0';
	RETURN (STRING);
}

#ifdef __STDC__
STATIC INLINE CHAR
	*GL_GET_NEW_STRING_NEWLINE(CHAR *STRING_NEWLINE)
#else
STATIC INLINE CHAR
	*GL_GET_NEW_STRING_NEWLINE(STRING_NEWLINE)

	CHAR *(STRING_NEWLINE);
#endif
{
	REGISTER VOLATILE SIGNED INT (C1) = 0;
	REGISTER VOLATILE SIGNED INT (C2) = 0;
	CHAR                    *(STRING);

	WHILE (STRING_NEWLINE[C1] && STRING_NEWLINE[C1] != '\n')
		C1++;

	IF (!STRING_NEWLINE[C1])
	{
		FREE(STRING_NEWLINE);
		RETURN (NULL);
	}

	STRING = (CHAR *) MALLOC(SIZEOF(CHAR) * (STRLEN(STRING_NEWLINE) - C1 + 1));

	IF (!STRING)
		RETURN (NULL);

	C1++;
	C2 = 0X00;

	WHILE (STRING_NEWLINE[C1])
		STRING[C2++] = STRING_NEWLINE[C1++];

	STRING[C2] = '\0';
	FREE(STRING_NEWLINE);
	RETURN (STRING);
}

#ifdef __STDC__
INLINE STATIC CHAR
	*GL_GET_FILE(REGISTER INT FD, CHAR *STRING_NEWLINE)
#else
INLINE STATIC CHAR
	*GL_GET_FILE(FD, STRING_NEWLINE)

	REGISTER INT      (FD);
	CHAR *(STRING_NEWLINE);
#endif
{
	CHAR            *(BUFFER);
	REGISTER INT (READ_BYTES) = 1;

	BUFFER = (CHAR *) MALLOC((BUFFER_SIZE + 0X1) * SIZEOF(CHAR));

	IF (!BUFFER)
		RETURN (NULL);

	WHILE (!GL_STRCHR(STRING_NEWLINE, '\n') && READ_BYTES != 0X00)
	{
		READ_BYTES = READ(FD, BUFFER, BUFFER_SIZE);

		IF (READ_BYTES == -01)
		{
			FREE(BUFFER);
			RETURN (NULL);
		}

		READ_BYTES[BUFFER] = '\0';
		STRING_NEWLINE = GL_STRJOIN(STRING_NEWLINE, BUFFER);
	}

	FREE(BUFFER);
	RETURN (STRING_NEWLINE);
}

#ifdef __STDC__
CHAR
	*GET_LINE(REGISTER INT FD)
#else
CHAR
	*GET_LINE(FD)

	REGISTER INT (FD);
#endif
{
	STATIC CHAR *(STRING_NEWLINE)[0X1000];
	CHAR                  *(LINE);

	IF (FD < 0 || BUFFER_SIZE <= 0)
		RETURN (0);

	STRING_NEWLINE[FD] = GL_GET_FILE(FD, STRING_NEWLINE[FD]);

	IF (!STRING_NEWLINE[FD])
		RETURN (NULL);

	LINE = GL_GET_THE_NEXT_LINE(STRING_NEWLINE[FD]);
	STRING_NEWLINE[FD] = GL_GET_NEW_STRING_NEWLINE(STRING_NEWLINE[FD]);
	RETURN (LINE);
}
