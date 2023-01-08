/*══════════════════════════════════════╦═════════════════════════════╗
║ H - C_MT                              ║       Maximum Tension       ║
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

#ifndef C_MT

# define C_MT 42

# include	<time.h> /*
# CLOCK();
# CLOCK_T <VAR>;
*/

# include	<fcntl.h> /*
# OPEN( <FD>, <OPEN_MODE> );
# WOPEN();
# CLOSE( <FD> );
*/

# ifdef _WIN32

#  include	<windows.h> /*
#  CREATEPROCESS()
#  FOR INCLUDE SPECIAL WINDOWS MODULES
*/

#  include	<io.h>/*
#  _READ( <MODE/FD>, <*CHAR>, <SIZE> );
#  _WRITE( <MODE/FD>, <*CHAR>, <SIZE> );
#  _FREAD()
#  _FWRITE()
#  _EOF()
#  _COMMIT()
#  _CREAT()
*/

#  define           read _read
#  define          write _write

#  define           READ _read
#  define          FREAD _fread
#  define           OPEN _open
#  define          WOPEN _wopen
#  define          WRITE _write
#  define         COMMIT _commit
#  define          CREAT _creat

#  define          _READ READ
#  define         _FREAD FREAD
#  define          _OPEN OPEN
#  define         _WOPEN WOPEN
#  define         _WRITE WRITE
#  define        _FWRITE _fwrite
#  define        _COMMIT COMMIT
#  define         _CREAT CREAT

#  define           _EOF _eof
#  define            EOF _eof
#  define         CREATE _creat
#  define  CREATEPROCESS CreateProcess
#  define CREATE_PROCESS CreateProcess
#  define           FORK CreateProcess

#  define STDIN_FILENO  0
#  define STDOUT_FILENO 1
#  define STDERR_FILENO 2

#  define O_APPEND _O_APPEND // Position file pointer to end
#  define O_BINARY _O_BINARY // Open file in binary mode
#  define O_CREAT  _O_CREAT  // Create file if it does not exist
#  define O_EXCL   _O_EXCL   // Used with O_CREAT, returns an error if file exists
#  define O_RDONLY _O_RDONLY // Open file for reading only
#  define O_RDWR   _O_RDWR   // Open file for reading and writing
#  define O_TEXT   _O_TEXT   // Open file in text mode
#  define O_TRUNC  _O_TRUNC  // Truncates existing file
#  define O_WRONLY _O_WRONLY // Opens file for writing only

# endif

# if defined(__unix__) || defined(__linux__) || defined(__MACH__) || defined(__APPLE__) || defined(__ANDROID__)

#  include	<unistd.h>/*
#  READ( <MODE/FD>, <*CHAR>, <SIZE> );
#  WRITE( <MODE/FD>, <*CHAR>, <SIZE> );
*/

#  define           READ read
#  define           OPEN open
#  define          WRITE write
#  define          CLOSE close

#  define  CREATEPROCESS fork
#  define CREATE_PROCESS fork
#  define           FORK fork

# endif

# include	<stdio.h> /*
# FREAD()
# FWRITE()
# FOPEN()
# FCLOSE()
# PRINTF()
*/

# include	<stdlib.h> /*
# MALLOC( <*VOID> );
# SIZEOF( [KEYWORD] );
# FREE( <*VOID> );
# SIZE_T <VAR>;
# SSIZE_T <VAR>;
*/

# include	<stdarg.h> /*
# VA_LIST();
# VA_START();
# VA_END();
# VA_ARG();
# VA_COPY();
*/

# ifndef __GNUC__
#  ifdef __volatile__
#   define __VOLATILE__ __volatile__
#  else
#   define __VOLATILE__ volatile
#  endif
#  define       __asm__ asm
#  define       __ASM__ asm
#  define           ASM asm
# else
#  define           asm __asm__
#  define           ASM __asm__
#  define       __ASM__ __asm__
#  define  __VOLATILE__ __volatile__
# endif

# undef INT
# define      INT int
# define    SHORT short
# define UNSIGNED unsigned
# define   SIGNED signed
# define   STATIC static
# define   EXTERN extern
# define     VOID void
# define    CONST const
# define    INT16 short
# define VOLATILE volatile
# define     CHAR char
# define     LONG long
# define    FLOAT float
# define   DOUBLE double
# define     AUTO auto
# define REGISTER register
# define   INLINE inline
# define RESTRICT restrict
# ifdef _WIN64
#  define SSIZE_T __int64
#  define __INT64 __int64
# else
#  define SSIZE_T long
# endif
# define   SIZE_T size_t

# define   STRUCT strcut
# define  TYPEDEF typedef
# define    UNION union
# define     ENUM enum

# define      FOR for
# define    WHILE while
# define       DO do
# define   RETURN return
# define   TYPEOF typeof
# define       IF if
# define     ELSE else
# define CONTINUE continue
# define    BREAK break
# define   SWITCH switch
# define     CASE case
# define  DEFAULT default
# define     GOTO goto

# define  VA_LIST va_list
# define VA_START va_start
# define   VA_END va_end
# define   VA_ARG va_arg
# define  VA_COPY va_copy
# define  VFSCANF vfscanf
# define    SCANF scanf
# define     EXIT exit
# define   MALLOC malloc
# define     FREE free
# define    CLOCK clock
# define  CLOCK_T clock_t
# ifndef ERROR
#  define ERROR 0
# endif
# ifndef NULL
#  define NULL ((VOID *)0)
# endif
# ifndef TRUE
#  define TRUE 1
# endif
# ifndef FALSE
#  define FALSE 0
# endif

# define     ACCESS _access
# define       DUP2 _dup2
# define     EXECVE _execve
# define FTRUNCASTE _chsize
# define     UNLINK _unlink
# define     FILENO _fileno
# define     GETCWD _getcwd
# define      CHDIR _chdir
# define     ISATTY _isatty
# define      LSEEK _lseek

# define    SRANDOM srand
# define     RANDOM rand
# define      SRAND srand
# define       RAND rand

# ifndef R_OK
#  define R_OK 4 /* Test for read permission */
# endif
# ifndef W_OK
#  define W_OK 2 /* Test for write permission */
# endif
# ifndef X_OK
#  define X_OK 1 /* execute permission (unsupported in Windows)*/
# endif
# ifndef F_OK
#  define F_OK 0 /* Test for existence */
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif
# ifndef CHAR_MAX
#  define CHAR_MAX 127
# endif
# ifndef CHAR_MIN
#  define CHAR_MIN -128
# endif
# ifndef SIZE_T_MAX
#  define SIZE_T_MAX 4294967294
# endif
# ifndef SSIZE_T_MAX
#  define SSIZE_T_MAX 2147483647
# endif
# ifndef SSIZE_T_MIN
#  define SSIZE_T_MIN -2147483648
# endif
# ifndef LONG_MAX
#  define LONG_MAX 9223372036854775807
# endif
# ifndef LONG_MIN
#  define LONG_MIN -9223372036854775808
# endif
# ifndef SHORT_MAX
#  define SHORT_MAX 32767
# endif
# ifndef SHORT_MIN
#  define SHORT_MIN -32768
# endif
# ifndef UCHAR_MAX
#  define UCHAR_MAX 254
# endif
# ifndef USHRT_MAX
#  define USHRT_MAX 65535
# endif
# ifndef UINT_MAX
#  define UINT_MAX 4294967294
# endif
# ifndef ULONG_MAX
#  define ULONG_MAX 18446744073709551615
# endif

# define MAIN main
# define ABS(__IN_A__) (__IN_A__ < 0 ? __IN_A__ * -1 : __IN_A__)
# define SIZEOF(__IN_S__) \
	({\
		TYPEOF(__IN_S__) __OUT_S__;\
		(CHAR*) (&__OUT_S__+1) - (CHAR*) (&__OUT_S__);\
	})

INT		STRNCMP(CONST CHAR *STRING_1, CONST CHAR *STRING_2, SIZE_T SIZE);
INT		STRLEN(CONST CHAR *STR);
INT		ATOI(CONST CHAR *STR);
INT		GETCHAR(VOID);

CHAR	*STRNSTR(CONST CHAR *HAYSTACK, CONST CHAR *NEEDLE, SIZE_T LEN);
CHAR	*RELPACE_STRING(CHAR* STR, CHAR* OLD, CHAR* NEW);
CHAR	*STRSTR(REGISTER CHAR *STRING, CHAR *SUB_STRING);
CHAR	*GET_PATH(CONST UNSIGNED VOLATILE INT CHOICE);
CHAR	*STRCHR(CONST CHAR *STRING, INT CHARACTER);
CHAR	**SPLIT(CHAR CONST *STR, CHAR CHARACTER);
CHAR	*STRCPY(CHAR *STR1, CONST CHAR *STR2);
CHAR	*STRDUP(CONST CHAR *STRING);
CHAR	UPPER_CASE(CHAR CHARACTER);
CHAR	LOWER_CASE(CHAR CHARACTER);
CHAR	*GET_LINE(INT FD);
CHAR	*ITOA(INT NUMBER);
CHAR	*GETS(CHAR *STR);

VOID	STRITERI(CHAR *STRING, VOID (*FUNCTION)(UNSIGNED INT, CHAR *));
VOID	*MEMCPY(VOID *DEST, CONST VOID *SRC, SIZE_T SIZE);
VOID	*MEMMOVE(VOID *DST, CONST VOID *SRC, SIZE_T LEN);
VOID	*MEMSET(VOID *ELEMENT, INT OBJECT, SIZE_T SIZE);
VOID	PUT_CHAR_FD(CHAR CHARACTER, INT FD);
VOID	*CALLOC(SIZE_T COUNT, SIZE_T SIZE);
VOID	BZERO(VOID *ELEMENT, SIZE_T SIZE);
VOID	PUT_NUMBER_FD(INT NUMBER, INT FD);
VOID	PUT_STR_FD(CHAR *STRING, INT FD);
VOID	PUT_CHAR(CHAR CHARACTER);
VOID	PUT_NUMBER(INT NUMBER);
VOID	PUT_STR(CHAR *STRING);

SIZE_T	STRLCAT(CHAR *DST, CONST CHAR *SRC, SIZE_T DST_SIZE);

#endif
