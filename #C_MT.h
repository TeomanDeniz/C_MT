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
# CLOCK()
# CLOCK_T
*/

# include	<fcntl.h> /*
# OPEN()
# WOPEN()
# CLOSE()
*/

# ifdef _WIN32
#  include	<windows.h> /*
#  CREATEPROCESS()
#  FOR INCLUDE SPECIAL WINDOWS MODULES
*/
#  include	<io.h>/*
#  _READ()
#  _FREAD()
#  _WRITE()
#  _FWRITE()
#  _EOF()
#  _COMMIT()
#  _CREAT()
#  
*/
#  define READ _read
#  define FREAD _fread
#  define OPEN _open
#  define WOPEN _wopen
#  define WRITE _write
#  define COMMIT _commit
#  define CREAT _creat

#  define _READ READ
#  define _FREAD FREAD
#  define _OPEN OPEN
#  define _WOPEN WOPEN
#  define _WRITE WRITE
#  define _FWRITE _fwrite
#  define _COMMIT COMMIT
#  define _CREAT CREAT

#  define _EOF _eof
#  define CREATE CREAT
#  define CREATEPROCESS CreateProcess
#  define CREATE_PROCESS CreateProcess
#  define FORK CreateProcess

# define STDIN_FILENO  0
# define STDOUT_FILENO 1
# define STDERR_FILENO 2
# endif

# if defined(__unix__) || defined(__linux__) || defined(__MACH__) || defined(__APPLE__) || defined(__ANDROID__)
#  include	<unistd.h>/*
#  READ()
#  WRITE()
#  CLOSE()
#  WOPEN()
*/
#  define READ read
#  define OPEN open
#  define WRITE write
#  define CLOSE close

#  define CREATEPROCESS fork
#  define CREATE_PROCESS fork
#  define FORK fork
# endif

# include	<stdio.h> /*
# FREAD()
# FWRITE()
# FOPEN()
# FCLOSE()
# PRINTF()
*/

# include	<stdlib.h> /*
# MALLOC()
# FREE()
# SIZE_T
# SSIZE_T
*/

# include	<stdarg.h> /*
# VA_LIST()
# VA_START()
# VA_END()
# VA_ARG()
*/

# define SHORT short
# undef INT
# define INT int
# define UNSIGNED unsigned
# define SIGNED signed
# define STATIC static
# define EXTERN extern
# define VOID void
# define CONST const
# define INT16 SHORT
# define VOLATILE volatile
# define CHAR char
# define LONG long
# define AUTO auto
# define REGISTER register
# define INLINE inline
# define RESTRICT restrict
# ifdef _WIN64
#  define SSIZE_T __int64
# else
#  define SSIZE_T LONG
# endif
# define SIZE_T size_t

# define STRUCT strcut
# define TYPEDEF typedef
# define UNION union
# define ENUM enum

# define FOR for
# define WHILE while
# define DO do
# define RETURN return
# define TYPEOF typeof
# define IF if
# define ELSE else
# define CONTINUE continue
# define BREAK break
# define SWITCH switch
# define CASE case
# define DEFAULT default
# define GOTO goto
# define VA_LIST va_list
# define VA_START va_start
# define VA_END va_end
# define VA_ARG va_arg
# define VFSCANF vfscanf
# define SCANF scanf
# define EXIT exit
# define MALLOC malloc
# define FREE free
# define CLOCK clock
# define CLOCK_T clock_t
# define PRINTF printf // silmeyi unutma!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# ifndef ERROR
#  define ERROR 0 
# endif
# ifndef NULL
#  define NULL 0
# endif
# ifndef TRUE
#  define TRUE 0
# endif
# ifndef FALSE
#  define FALSE 1
# endif

# define ACCESS _access
# define DUP2 _dup2
# define EXECVE _execve
# define FTRUNCASTE _chsize
# define UNLINK _unlink
# define FILENO _fileno
# define GETCWD _getcwd
# define CHDIR _chdir
# define ISATTY _isatty
# define LSEEK _lseek
# define SRANDOM srand
# define RANDOM rand
# define SRAND srand
# define RAND rand

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

# define MAIN main(INT ARGN, CHAR *ARGS[])
# define ABS(__IN_A__) (__IN_A__ < 0 ? __IN_A__ * -1 : __IN_A__)
# define SIZEOF(__IN_S__) \
	({\
		TYPEOF(__IN_S__) __OUT_S__;\
		(CHAR*) (&__OUT_S__+1) - (CHAR*) (&__OUT_S__);\
	})

INT	STRLEN(CONST CHAR *STR);
INT	GETCHAR(VOID);
INT	ATOI(CONST CHAR *STR);
CHAR	UPPER_CASE(CHAR CHARACTER);
CHAR	LOWER_CASE(CHAR CHARACTER);
CHAR	*ITOA(INT NUMBER);
CHAR	**SPLIT(CHAR CONST *STR, CHAR CHARACTER);
CHAR	*GETS(CHAR *STR);
CHAR	*RELPACE_STRING(CHAR* STR, CHAR* OLD, CHAR* NEW);
CHAR	*GET_PATH(CONST UNSIGNED VOLATILE INT CHOICE);
CHAR	*STRSTR(REGISTER CHAR *STRING, CHAR *SUB_STRING);
CHAR	*STRCPY(CHAR *STR1, CONST CHAR *STR2);
VOID	BZERO(VOID *ELEMENT, SIZE_T SIZE);
VOID	PUT_NUMBER_FD(INT NUMBER, INT FD);
VOID	PUT_NUMBER(INT NUMBER);
VOID	PUT_CHAR_FD(CHAR CHARACTER, INT FD);
VOID	PUT_CHAR(CHAR CHARACTER);
VOID	*CALLOC(SIZE_T COUNT, SIZE_T SIZE);
VOID	*MEMCPY(VOID *DEST, CONST VOID *SRC, SIZE_T SIZE);
VOID	*MEMSET(VOID *ELEMENT, INT OBJECT, SIZE_T SIZE);

#endif
