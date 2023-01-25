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
║ ╚─────────┴────────────╝ │ U 2023/01/25 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/


#ifndef C_MT_H

# define C_MT_H 42

# include <time.h> /*
# CLOCK();
# CLOCK_T <VAR_T>;
*/

# include <fcntl.h> /*
# _OPEN(<FD>, <OPEN_MODE>);
# OPEN(<FD>, <OPEN_MODE>);
*/

# ifdef _WIN32

#  include <windows.h> /*
#  CREATEPROCESS();
*/

#  include <errno.h>/*
#  _CLOSE( <FD> );
*/

#  include <io.h>/*
#  _READ   ( <MODE/FD>, <*CHAR>, <SIZE> );
#  _WRITE  ( <MODE/FD>, <*CHAR>, <SIZE> );
#  _CLOSE  ( <FD> );
#  _FREAD  ();
#  _COMMIT ();
#  _FWRITE ();
#  _CREAT  ();
#  _EOF    ();
*/

#  include <process.h>/*
#  _GETPID();
*/

#  define         getpid _getpid
#  define          close _close
#  define          write _write
#  define           read _read

#  define         COMMIT _commit
#  define         FWRITE _fwrite
#  define         GETPID _getpid
#  define          CLOSE _close
#  define          CREAT _creat
#  define          FREAD _fread
#  define          WOPEN _wopen
#  define          WRITE _write
#  define           OPEN _open
#  define           READ _read

#  define        _COMMIT _commit
#  define        _FWRITE _fwrite
#  define        _GETPID _getpid
#  define         _CLOSE _close
#  define         _CREAT _creat
#  define         _FREAD _fread
#  define         _WOPEN _wopen
#  define         _WRITE _write
#  define          _OPEN _open
#  define          _READ _read

#  define CREATE_PROCESS CreateProcess
#  define  CREATEPROCESS CreateProcess
#  define         CREATE _creat
#  define           _EOF _eof
#  define            EOF _eof

#  define STDIN_FILENO  0
#  define STDOUT_FILENO 1
#  define STDERR_FILENO 2

#  define O_APPEND _O_APPEND // Position file pointer to end
#  define O_BINARY _O_BINARY // Open file in binary mode
#  define O_RDONLY _O_RDONLY // Open file for reading only
#  define O_WRONLY _O_WRONLY // Opens file for writing only
#  define  O_CREAT _O_CREAT  // Create file if it does not exist
#  define  O_TRUNC _O_TRUNC  // Truncates existing file
#  define   O_EXCL _O_EXCL   // Used with O_CREAT, returns an error if file exists
#  define   O_RDWR _O_RDWR   // Open file for reading and writing
#  define   O_TEXT _O_TEXT   // Open file in text mode

# endif

# if defined(__unix__) || defined(__linux__) || defined(__MACH__) || defined(__APPLE__) || defined(__ANDROID__)

#  include	<unistd.h>/*
#  READ   ( <MODE/FD>, <*CHAR>, <SIZE> );
#  WRITE  ( <MODE/FD>, <*CHAR>, <SIZE> );
#  CLOSE  ( <FD> );
#  GETPID (VOID);
#  FORK   ();
#  OPEN   ();
*/

#  define         GETPID getpid
#  define          CLOSE close
#  define          WRITE write
#  define           OPEN open
#  define           READ read

#  define        _GETPID getpid
#  define         _CLOSE close
#  define         _WRITE write
#  define          _OPEN open
#  define          _READ read

#  define        _getpid getpid
#  define         _close close
#  define         _write write
#  define          _open open
#  define          _read read

#  define           FORK fork

# endif

# include	<stdio.h> /*
# FREAD();
# FWRITE();
# FOPEN();
# FCLOSE();
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

# ifdef INT
#  undef INT
# endif

# define REGISTER register
# define RESTRICT restrict
# define UNSIGNED unsigned
# define VOLATILE volatile
# define   DOUBLE double
# define   EXTERN extern
# define   SIGNED signed
# define   STATIC static
# define   INLINE inline
# define    CONST const
# define    FLOAT float
# define    INT16 short
# define    SHORT short
# define     AUTO auto
# define     CHAR char
# define     LONG long
# define     VOID void
# define      INT int
# ifdef _WIN64
#  define SSIZE_T __int64
#  define __INT64 __int64
# else
#  define SSIZE_T long
# endif
# define   SIZE_T unsigned int

# define  TYPEDEF typedef
# define   STRUCT strcut
# define    UNION union
# define     ENUM enum

# define CONTINUE continue
# define  DEFAULT default
# define   RETURN return
# define   SWITCH switch
# define   TYPEOF typeof
# define    BREAK break
# define    WHILE while
# define     ELSE else
# define     CASE case
# define     GOTO goto
# define      FOR for
# define       DO do
# define       IF if

# define VA_START va_start
# define  VA_COPY va_copy
# define  VA_LIST va_list
# define  CLOCK_T clock_t
# define  VFSCANF vfscanf
# define   MALLOC malloc
# define   VA_ARG va_arg
# define   VA_END va_end
# define    CLOCK clock
# define    SCANF scanf
# define     EXIT exit
# define     FREE free
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

# define FTRUNCASTE _chsize
# define     ACCESS _access
# define     EXECVE _execve
# define     FILENO _fileno
# define     GETCWD _getcwd
# define     ISATTY _isatty
# define     UNLINK _unlink
# define      CHDIR _chdir
# define      LSEEK _lseek
# define       DUP2 _dup2

# define    _ACCESS _access
# define    _CHSIZE _chsize
# define    _EXECVE _execve
# define    _FILENO _fileno
# define    _GETCWD _getcwd
# define    _ISATTY _isatty
# define    _UNLINK _unlink
# define     _CHDIR _chdir
# define     _LSEEK _lseek
# define      _DUP2 _dup2

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
 SIZE_T    STRLCAT         (CHAR *DST, CONST CHAR *RESTRICT SRC, REGISTER SIZE_T DST_SIZE);
 SIZE_T    STRLCPY         (CHAR *DST, CONST CHAR *SRC, REGISTER SIZE_T SIZE);
 CHAR      *SUBSTR         (CHAR CONST *STRING, REGISTER UNSIGNED INT START, REGISTER SIZE_T LEN);
 CHAR      *STRNSTR        (CONST CHAR *HAYSTACK, CONST CHAR *RESTRICT NEEDLE, CONST SIZE_T LEN);
 CHAR      *STRMAPI        (CHAR CONST *STRING, CHAR (*FUNCT)(UNSIGNED INT, CHAR));
 CHAR      *STRTRIM        (CHAR CONST *STRING_1, CHAR CONST *STRING_2);
 CHAR      *STRCHR         (CONST CHAR *STRING, REGISTER INT CHARACTER);
 CHAR      *STRJOIN        (CHAR CONST *STRING_1, CONST CHAR *STRING_2);
 CHAR      *STRSTR         (CHAR *STRING, CHAR *RESTRICT SUB_STRING);
 CHAR      *STRCPY         (CHAR *STRING_1, CONST CHAR *STRING_2);
 CHAR      *GET_PATH       (CONST UNSIGNED VOLATILE INT CHOICE);
 CHAR      **SPLIT         (CHAR CONST *STRING, CHAR CHARACTER);
 CHAR      *RELPACE_STRING (CHAR* STRING, CHAR* OLD, CHAR* NEW);
 CHAR      *STRRCHR        (CONST CHAR *STRING, INT CHARACTER);
 CHAR      UPPER_CASE      (REGISTER CHAR CHARACTER);
 CHAR      LOWER_CASE      (REGISTER CHAR CHARACTER);
 CHAR      *ITOA           (REGISTER INT NUMBER);
 CHAR      *STRDUP         (CONST CHAR *STRING);
 CHAR      *GETS           (CHAR *STRING);
 CHAR      *GET_LINE       (INT FD);
 VOID      *MEMCHR         (CONST VOID *OBJECT, REGISTER INT CHARACTER, REGISTER SIZE_T LEN);
 VOID      *MEMSET         (VOID *OBJECT, REGISTER INT INPUT, REGISTER SIZE_T SIZE);
 VOID      *MEMMOVE        (VOID *DST, CONST VOID *RESTRICT SRC, CONST SIZE_T LEN);
 VOID      STRITERI        (CHAR *STRING, VOID (*FUNCTION)(UNSIGNED INT, CHAR *));
 VOID      *MEMCPY         (VOID *DEST, CONST VOID *SRC, REGISTER SIZE_T SIZE);
 VOID      *CALLOC         (REGISTER SIZE_T COUNT, REGISTER SIZE_T SIZE);
 VOID      PUT_NUMBER_FD   (REGISTER INT NUMBER, INT FD);
 VOID      PUTNBR_FD       (REGISTER INT NUMBER, INT FD);
 VOID      PUT_CHAR_FD     (CHAR CHARACTER, INT FD);
 VOID      PUTCHAR_FD      (CHAR CHARACTER, INT FD);
 VOID      PUT_STR_FD      (CHAR *STRING, INT FD);
 VOID      PUTSTR_FD       (CHAR *STRING, INT FD);
 VOID      PUT_NUMBER      (REGISTER INT NUMBER);
 VOID      PUTNBR          (REGISTER INT NUMBER);
 VOID      PUT_CHAR        (CHAR CHARACTER);
 VOID      PUTCHAR         (CHAR CHARACTER);
 VOID      PUT_STR         (CHAR *STRING);
 VOID      PUTSTR          (CHAR *STRING);
 INT       STRNCMP         (CONST CHAR *RESTRICT STRING_1, CONST CHAR *RESTRICT STRING_2, CONST SIZE_T SIZE);
 INT       MEMCMP          (CONST VOID *OBJECT_1, CONST VOID *OBJECT_2, REGISTER SIZE_T LEN);
 INT       STRCMP          (CONST CHAR *STRING_1, CONST CHAR *STRING_2);
 INT       PRINTF_FD       (INT FD, CONST CHAR *(__), ...);
 INT       STRLEN          (CONST CHAR *RESTRICT STRING);
 INT       PRINTF          (CONST CHAR *(__), ...);
 INT       ATOI            (CONST CHAR *STRING);
 INT       GETCHAR         (VOID);

# define replace_string RELPACE_STRING
# define  put_number_fd PUT_NUMBER_FD
# define    put_char_fd PUT_CHAR_FD
# define     lower_case LOWER_CASE
# define     put_number PUT_NUMBER
# define     put_str_fd PUT_STR_FD
# define     putchar_fd PUTCHAR_FD
# define     upper_case UPPER_CASE
# define      printf_fd PRINTF_FD
# define      putnbr_fd PUTNBR_FD
# define      putstr_fd PUTSTR_FD
# define       get_path GET_PATH
# define       get_line GET_LINE
# define       put_char PUT_CHAR
# define       striteri STRITERI
# define        getchar GETCHAR
# define        memmove MEMMOVE
# define        pow_int POW_INT
# define        put_str PUT_STR
# define        putchar PUTCHAR
# define        strjoin STRJOIN
# define        strlcat STRLCAT
# define        strlcpy STRLCPY
# define        strmapi STRMAPI
# define        strncmp STRNCMP
# define        strnstr STRNSTR
# define        strrchr STRRCHR
# define        strtrim STRTRIM
# define         calloc CALLOC
# define         memchr MEMCHR
# define         memcmp MEMCMP
# define         memcpy MEMCPY
# define         memset MEMSET
# define         printf PRINTF
# define         putnbr PUTNBR
# define         putstr PUTSTR
# define         strchr STRCHR
# define         strcmp STRCMP
# define         strcpy STRCPY
# define         strdup STRDUP
# define         strlen STRLEN
# define         strstr STRSTR
# define         substr SUBSTR
# define          bzero BZERO
# define          split SPLIT
# define           atoi ATOI
# define           gets GETS
# define           itoa ITOA
# define            abs ABS
# define            pow POW

#endif
