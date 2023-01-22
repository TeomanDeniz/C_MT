/*════════════════════════════════════════╦═════════════════════════════╗
║ H - C_MT                                ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2020/07/23 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/01/13 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/


#ifndef C_MT_H

# define C_MT_H 42

# include	<time.h> /*
# CLOCK();
# CLOCK_T <VAR_T>;
*/

# include	<fcntl.h> /*
# OPEN(<FD>, <OPEN_MODE>);
# CLOSE(<FD>);
*/

# ifdef _WIN32

#  include	<windows.h> /*
#  CREATEPROCESS();
*/

#  include	<io.h>/*
#  _READ( <MODE/FD>, <*CHAR>, <SIZE> );
#  _WRITE( <MODE/FD>, <*CHAR>, <SIZE> );
#  _FREAD();
#  _FWRITE();
#  _EOF();
#  _COMMIT();
#  _CREAT();
*/

#  define           read _read
#  define          write _write

#  define           READ _read
#  define          FREAD _fread
#  define           OPEN _open
#  define          WOPEN _wopen
#  define          WRITE _write
#  define         FWRITE _fwrite
#  define         COMMIT _commit
#  define          CREAT _creat

#  define          _READ _read
#  define         _FREAD _fread
#  define          _OPEN _open
#  define         _WOPEN _wopen
#  define         _WRITE _write
#  define        _FWRITE _fwrite
#  define        _COMMIT _commit
#  define         _CREAT _creat

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
#  define  O_CREAT _O_CREAT  // Create file if it does not exist
#  define   O_EXCL _O_EXCL   // Used with O_CREAT, returns an error if file exists
#  define O_RDONLY _O_RDONLY // Open file for reading only
#  define   O_RDWR _O_RDWR   // Open file for reading and writing
#  define   O_TEXT _O_TEXT   // Open file in text mode
#  define  O_TRUNC _O_TRUNC  // Truncates existing file
#  define O_WRONLY _O_WRONLY // Opens file for writing only

# endif

# if defined(__unix__) || defined(__linux__) || defined(__MACH__) || defined(__APPLE__) || defined(__ANDROID__)

#  include	<unistd.h>/*
#  READ( <MODE/FD>, <*CHAR>, <SIZE> );
#  WRITE( <MODE/FD>, <*CHAR>, <SIZE> );
#  OPEN();
#  CLOSE();
#  FORK();
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
# FREAD();
# FWRITE();
# FOPEN();
# FCLOSE();
# PRINTF();
*/

# include	<stdlib.h> /*
# MALLOC(INT <VAR>);
# FREE(*VOID);
# SIZE_T <VAR>;
# SSIZE_T <VAR>;
*/

# include	<stdarg.h> /*
# VA_LIST V_ARG;
# VA_START(V_ARG, <VAR_ARG>);
# VA_ARG(V_ARG, KEYWORD);
# VA_END(V_ARG);
# VA_COPY(V_ARG2, V_ARG);
*/

# ifndef __GNUC__
#  ifdef __volatile__
#   define __VOLATILE__ __volatile__
#  else
#   define __VOLATILE__ volatile
#   define __volatile__ volatile
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
# define   SIZE_T unsigned int

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

# define    _ACCESS _access
# define      _DUP2 _dup2
# define    _EXECVE _execve
# define    _CHSIZE _chsize
# define    _UNLINK _unlink
# define    _FILENO _fileno
# define    _GETCWD _getcwd
# define     _CHDIR _chdir
# define    _ISATTY _isatty
# define     _LSEEK _lseek

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

 LONG LONG POW_INT         (REGISTER LONG LONG NUMBER, REGISTER SIGNED INT POWER);
 DOUBLE    POW             (DOUBLE NUMBER, REGISTER SIGNED INT POWER);
 SIZE_T    STRLCAT         (CHAR *DST, CONST CHAR *RESTRICT SRC, SIZE_T DST_SIZE);
 SIZE_T    STRLCPY         (CHAR *DST, CONST CHAR *SRC, SIZE_T SIZE);
 CHAR      *STRNSTR        (CONST CHAR *HAYSTACK, CONST CHAR *RESTRICT NEEDLE, CONST SIZE_T LEN);
 CHAR      *STRMAPI        (CHAR CONST *STRING, CHAR (*FUNCT)(UNSIGNED INT, CHAR));
 CHAR      *SUBSTR         (CHAR CONST *STRING, UNSIGNED INT START, SIZE_T LEN);
 CHAR      *STRTRIM        (CHAR CONST *STRING_1, CHAR CONST *STRING_2);
 CHAR      *STRCHR         (CONST CHAR *STRING, REGISTER INT CHARACTER);
 CHAR      *STRJOIN        (CHAR CONST *STRING_1, CONST CHAR *STRING_2);
 CHAR      *STRSTR         (CHAR *STRING, CHAR *RESTRICT SUB_STRING);
 CHAR      *STRCPY         (CHAR *STRING_1, CONST CHAR *STRING_2);
 CHAR      *GET_PATH       (CONST UNSIGNED VOLATILE INT CHOICE);
 CHAR      **SPLIT         (CHAR CONST *STRING, CHAR CHARACTER);
 CHAR      *RELPACE_STRING (CHAR* STRING, CHAR* OLD, CHAR* NEW);
 CHAR      *STRRCHR        (CONST CHAR *STRING, INT CHARACTER);
 CHAR      *ITOA           (REGISTER INT NUMBER);
 CHAR      *STRDUP         (CONST CHAR *STRING);
 CHAR      UPPER_CASE      (CHAR CHARACTER);
 CHAR      LOWER_CASE      (CHAR CHARACTER);
 CHAR      *GETS           (CHAR *STRING);
 CHAR      *GET_LINE       (INT FD);
 VOID      *MEMMOVE        (VOID *DST, CONST VOID *RESTRICT SRC, CONST SIZE_T LEN);
 VOID      STRITERI        (CHAR *STRING, VOID (*FUNCTION)(UNSIGNED INT, CHAR *));
 VOID      *MEMSET         (VOID *OBJECT, REGISTER INT INPUT, SIZE_T SIZE);
 VOID      *MEMCHR         (CONST VOID *OBJECT, INT CHARACTER, SIZE_T LEN);
 VOID      *MEMCPY         (VOID *DEST, CONST VOID *SRC, SIZE_T SIZE);
 VOID      BZERO           (VOID *ELEMENT, SIZE_T SIZE);
 VOID      *CALLOC         (SIZE_T COUNT, SIZE_T SIZE);
 VOID      PUT_CHAR_FD     (CHAR CHARACTER, INT FD);
 VOID      PUT_STR_FD      (CHAR *STRING, INT FD);
 VOID      PUT_NUMBER_FD   (INT NUMBER, INT FD);
 VOID      PUT_CHAR        (CHAR CHARACTER);
 VOID      PUT_STR         (CHAR *STRING);
 VOID      PUT_NUMBER      (INT NUMBER);
 INT       STRNCMP         (CONST CHAR *STRING_1, CONST CHAR *STRING_2, SIZE_T SIZE);
 INT       MEMCMP          (CONST VOID *OBJECT_1, CONST VOID *OBJECT_2, SIZE_T LEN);
 INT       STRCMP          (CONST CHAR *STRING_1, CONST CHAR *STRING_2);
 INT       PRINTF_FD       (INT FD, CONST CHAR *(__), ...);
 INT       STRLEN          (CONST CHAR *RESTRICT STRING);
 INT       PRINTF          (CONST CHAR *(__), ...);
 INT       ATOI            (CONST CHAR *STRING);
 INT       GETCHAR         (VOID);

#endif
