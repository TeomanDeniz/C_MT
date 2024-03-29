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
║ ╚─────────┴────────────╝ │ U 2023/03/18 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#ifndef C_MT_H

# define C_MT_H 42

# ifdef __cplusplus
#  define __CPLUSPLUS __cplusplus
extern "C" { // C++
# endif

# ifdef __x86_64__
#  define __X86_64__  __x86_64__
# endif

# ifdef __ppc64__
#  define __PPC64__   __ppc64__
# endif

# include <time.h> /*
# TIME(TIME_T VAR);
# CLOCK();
# TIME_T <VAR_T>;
# CLOCK_T <VAR_T>;
*/

# include <fcntl.h> /*
# _OPEN(<FD>, <OPEN_MODE>);
# OPEN(<FD>, <OPEN_MODE>);
*/

# include <stdbool.h> /*
# BOOL BOOLEAN;
*/

# include <stdarg.h> /*
# VA_LIST  VA_ARGS;
# VA_START (VA_ARGS, <VAR_ARG>);
# VA_ARG   (VA_ARGS, KEYWORD);
# VA_END   (VA_ARGS);
# VA_COPY  (VA_ARGS2, VA_ARGS);
*/

# include <stdlib.h> /*
# EXIT(INT ERRORLEVEL);
# malloc(size_t <size>);
# free(void *<var>);
*/

# ifdef _WIN32

#  include <windows.h> /*
#  COORD coord;
#  SetConsoleCursorPosition();
#  CreateProcess();
#  GetStdHandle();
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
#  define         GETPID _getpid
#  define          CLOSE _close
#  define          CREAT _creat
#  define          WRITE _write
#  define           READ _read

#  define        _COMMIT _commit
#  define        _GETPID _getpid
#  define         _CLOSE _close
#  define         _CREAT _creat
#  define         _WRITE _write
#  define          _READ _read

#  define CREATE_PROCESS CreateProcess
#  define         CREATE _creat
#  define           _EOF _eof
#  define            EOF _eof

#  define STDIN_FILENO  0 // *
#  define STDOUT_FILENO 1 // | -> "FD"
#  define STDERR_FILENO 2 // *

#  define O_APPEND _O_APPEND // Position file pointer to end
#  define O_BINARY _O_BINARY // Open file in binary mode
#  define O_RDONLY _O_RDONLY // Open file for reading only
#  define O_WRONLY _O_WRONLY // Opens file for writing only
#  define  O_CREAT _O_CREAT  // Create file if it does not exist
#  define  O_TRUNC _O_TRUNC  // Truncates existing file
#  define   O_EXCL _O_EXCL   // Used with O_CREAT, returns an error if file exists
#  define   O_RDWR _O_RDWR   // Open file for reading and writing
#  define   O_TEXT _O_TEXT   // Open file in text mode

#  define SET_CONSOLE_CURSOR_POSITION SetConsoleCursorPosition
#  define              GET_STD_HADNLE GetStdHandle

# endif

# if defined(__unix__) || defined(__linux__) || defined(__MACH__) || defined(__APPLE__) || defined(__ANDROID__)

#  include	<unistd.h>/*
#  READ   ( <MODE/FD>, <*CHAR>, <SIZE> );
#  WRITE  ( <MODE/FD>, <*CHAR>, <SIZE> );
#  CLOSE  ( <FD> );
#  GETPID (VOID);
#  FORK   (VOID);
*/

#  ifdef __unix__
#   define __UNIX__ __unix__
#  endif

#  ifdef __linux__
#   define __LINUX__ __linux__
#  endif

#  define         GETPID getpid
#  define          CLOSE close
#  define          WRITE write
#  define           READ read

#  define        _GETPID getpid
#  define         _CLOSE close
#  define         _WRITE write
#  define          _READ read

#  define        _getpid getpid
#  define         _close close
#  define         _write write
#  define          _read read

#  define           FORK fork

# endif

# ifdef INT
#  undef INT
# endif

# define  TYPEDEF typedef
# define   STRUCT strcut
# define    UNION union
# define     BOOL bool
# define     ENUM enum

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
#  define __INT64 long
#  define __int64 long
# endif
# define   SIZE_T unsigned int

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

# define  CLOCK_T clock_t
# define   TIME_T time_t

# define VA_START va_start
# define  VA_COPY va_copy
# define  VA_LIST va_list
# define   VA_ARG va_arg
# define   VA_END va_end
# define    _OPEN open
# define    CLOCK clock
# define     EXIT exit
# define     OPEN open
# define     TIME time

# ifndef _open
#  define _open open
# endif

# ifdef __builtin_types_compatible_p
#  define __BUILTIN_TYPES_COMPATIBLE_P __builtin_types_compatible_p
# endif

# ifdef __builtin_constant_p
#  define __BUILTIN_CONSTANT_P __builtin_constant_p
# endif

# ifndef __GNUC__ /////////////////////////// IF NOT DEFINED __GNUC__ (GCC)
                                           //
#  define    __ALIGNOF__ __alignof__       //
#  define     __INLINE__ inline            //
#  define     __inline__ inline            //
                                           //
#  ifdef __TINYC__ //////////////////////  //
                                       //  //
#   define  __VOLATILE__ __volatile__  //  //
#   define    __TYPEOF__ __typeof__    //  //
#   define       __ASM__ __asm__       //  //
#   define           asm __asm__       //  //
#   define           ASM __asm__       //  //
                                       //  //
#  else /////////////////////////////////  //
                                       //  //
#   define  __VOLATILE__ volatile      //  //
#   define  __volatile__ volatile      //  //
#   define    __TYPEOF__ typeof        //  //
#   define    __typeof__ typeof        //  //
#   define       __asm__ asm           //  //
#   define       __ASM__ asm           //  //
#   define           ASM asm           //  //
                                       //  //
#  endif ////////////////////////////////  //
										   //
# else ////////////////////////////////////// IF  __GNUC__ (GCC) DEFINED
                                           //
#  define            asm __asm__           //
#  define            ASM __asm__           //
#  define        __ASM__ __asm__           //
#  define     __INLINE__ __inline__        //
#  define     __TYPEOF__ __typeof__        //
#  define    __ALIGNOF__ __alignof__       //
#  define   __VOLATILE__ __volatile__      //
                                           //
# endif /////////////////////////////////////

# define        __FUNC__ __func__
# ifndef __FUNCTION__
#  define   __FUNCTION__ __FUNC__
# endif

# ifdef CDECL
#  undef CDECL
# endif

# define   __ATTRIBUTE__ __attribute__
# define   __EXTENSION__ __extension__

# define       DLLEXPORT dllexport
# define        NORETURN noreturn
# define         ALIGNED aligned
# define         REGPARM regparm
# define         SECTION section
# define         STDCALL stdcall
# define          PACKED packed
# define          UNUSED unused
# define           CDECL cdecl

/////////////////////
# define and_eq &= //
# define bitand &  //
# define not_eq != //
# define xor_eq ^= //
# define  bitor |  //
# define  compl ~  //
# define  or_eq |= //
# define    and && //
# define    not !  //
# define    xor ^  //
# define     or || //
///////////////////// ISO646 C95
# define AND_EQ &= //
# define BITAND &  //
# define NOT_EQ != //
# define XOR_EQ ^= //
# define  BITOR |  //
# define  COMPL ~  //
# define  OR_EQ |= //
# define    AND && //
# define    NOT !  //
# define    XOR ^  //
# define     OR || //
/////////////////////

# ifndef NULL
#  define NULL ((VOID *)0)
# endif

# ifndef TRUE
#  define TRUE 1
# endif
# ifndef true
#  define true 1
# endif

# ifndef false
#  define false 0
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
#  define INT_MIN (-2147483648)
# endif
# ifndef CHAR_MAX
#  define CHAR_MAX 127
# endif
# ifndef CHAR_MIN
#  define CHAR_MIN (-128)
# endif
# ifndef SIZE_T_MAX
#  define SIZE_T_MAX 4294967294
# endif
# ifndef SSIZE_T_MAX
#  define SSIZE_T_MAX 9223372036854775807
# endif
# ifndef SSIZE_T_MIN
#  define SSIZE_T_MIN (-9223372036854775808)
# endif
# ifndef LONG_MAX
#  define LONG_MAX 9223372036854775807
# endif
# ifndef LONG_MIN
#  define LONG_MIN (-9223372036854775808)
# endif
# ifndef SHRT_MAX
#  define SHRT_MAX 32767
# endif
# ifndef SHRT_MIN
#  define SHRT_MIN (-32768)
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
# ifndef LLONG_MAX
#  define LLONG_MAX 9223372036854775807
# endif
# ifndef LLONG_MIN
#  define LLONG_MIN (-9223372036854775808)
# endif
# ifndef ULLONG_MAX
#  define ULLONG_MAX 18446744073709551615
# endif
# ifndef CHAR_BIT
#  define CHAR_BIT 8
# endif

# ifndef MB_LEN_MAX
#  define MB_LEN_MAX 1
# endif

# define NOT_INITIALIZED_PROPERLY 0xC0000142 // The application failed to initialize properly. Indicates that the application has been launched on a Desktop to which the current user has no access rights. Another possible cause is that either gdi32.dll or user32.dll has failed to initialize.
# define        PROGRAM_NOT_FOUND 9009 //////// Program is not recognized as an internal or external command, operable program or batch file. Indicates that command, application name or path has been misspelled when configuring the Action.
# define           FILE_NOT_FOUND 2 /////////// The system cannot find the file specified. Indicates that the file cannot be found in specified location.
# define           PATH_NOT_FOUND 3 /////////// The system cannot find the path specified. Indicates that the specified path cannot be found.
# define            ACCESS_DENIED 5 /////////// Access is denied. Indicates that user has no access right to specified resource.
# define            OUT_OF_MEMORY 0xC0000017 // Not enough virtual memory is available.
# define                  SUCCESS 0 /////////// Program successfully completed.
# define                   CTRL_C 0xC000013A // The application terminated as a result of a CTRL+C. Indicates that the application has been terminated either by the user's keyboard input CTRL+C or CTRL+Break or closing command prompt window.
# define                     FAIL 1 /////////// Program fail, incorrect function or indicates that Action has attempted to execute non-recognized command in Windows command prompt cmd.exe.
# ifndef EXIT_FAILURE
#  define EXIT_FAILURE 1
# endif
# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS 0
# endif

# define MAIN main

# define ABS(__IN_ABS__) (__IN_ABS__ < 0 ? __IN_ABS__ * -1 : __IN_ABS__)

# define MAX(__A_MAX__, __B_MAX__) \
	({\
		TYPEOF(__A_MAX__) __A_MAX2__ = (__A_MAX__);\
		TYPEOF(__B_MAX__) __B_MAX2__ = (__B_MAX__);\
		__A_MAX2__ > __B_MAX2__ ? __A_MAX2__ : __B_MAX2__;\
	})

# define MIN(__A_MIN__, __B_MIN__) \
	({\
		TYPEOF(__A_MIN__) __A_MIN2__ = (__A_MIN__);\
		TYPEOF(__B_MIN__) __B_MIN2__ = (__B_MIN__);\
		__A_MIN2__ < __B_MIN2__ ? __A_MIN2__ : __B_MIN2__;\
	})

# define TYPECMP(__IS_SAME_TYPE_A__, __IS_SAME_TYPE_B__)  __BUILTIN_TYPES_COMPATIBLE_P(__TYPEOF__(__IS_SAME_TYPE_A__), __TYPEOF__(__IS_SAME_TYPE_B__))
# define IS_ARRAY(__IS_ARRAY__) (!TYPECMP((__IS_ARRAY__), &(__IS_ARRAY__)[0]))
# define IS_POINTER(__IS_POINTER__) (!IS_ARRAY(__IS_POINTER__))

#include	"FILE/#FILE.h"
#include	"IO/#IO.h"
#include	"MATH/#MATH.h"
#include	"MEMORY/#MEMORY.h"
#include	"MODULES/#MODULES.h"
#include	"STRINGS/#STRINGS.h"

# ifdef __CPLUSPLUS
} // C++
# endif

#endif
