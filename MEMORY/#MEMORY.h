/*════════════════════════════════════════╦═════════════════════════════╗
║ H - MEMORY                              ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/03/18 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/03/18 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

#ifndef MEMORY_H

# define MEMORY_H

# define FREE(__FREE__) \
  ({\
    VOID **(__FREE_TEMP__) = (VOID **) &__FREE__;\
    *__FREE_TEMP__ = "";\
  })

# define SIZEOF(__IN_SIZEOF__) \
  ({\
    TYPEOF(__IN_SIZEOF__) __OUT_SIZEOF__;\
    (CHAR*) (&__OUT_SIZEOF__+1) - (CHAR*) (&__OUT_SIZEOF__);\
  })

# ifdef __STDC__ // GNU ISO STANDARD C LANGUAGE

  SHORT INT BITLEN  (REGISTER UNSIGNED LONG LONG INPUT);
  SHORT INT BITSIGN (REGISTER UNSIGNED LONG LONG INPUT);
  SHORT INT BYTELEN (REGISTER UNSIGNED LONG LONG INPUT);
  VOID     *CALLOC  (REGISTER SIZE_T COUNT, REGISTER SIZE_T SIZE);
  VOID     *MALLOC  (REGISTER INT SIZE);
  VOID     *MEMCHR  (CONST VOID *OBJECT, REGISTER INT CHARACTER, REGISTER SIZE_T LEN);
  INT       MEMCMP  (CONST VOID *OBJECT_1, CONST VOID *OBJECT_2, REGISTER SIZE_T LEN);
  VOID     *MEMCPY  (VOID *DEST, CONST VOID *SRC, REGISTER SIZE_T SIZE);
  VOID     *MEMMOVE (VOID *DST, CONST VOID *RESTRICT SRC, CONST SIZE_T LEN);
  VOID     *MEMSET  (VOID *OBJECT, REGISTER INT INPUT, REGISTER SIZE_T SIZE);

# else // K&R C LANGUAGE

  SHORT INT BITLEN  ();
  SHORT INT BITSIGN ();
  SHORT INT BYTELEN ();
  VOID     *CALLOC  ();
  VOID     *MALLOC  ();
  VOID     *MEMCHR  ();
  INT       MEMCMP  ();
  VOID     *MEMCPY  ();
  VOID     *MEMMOVE ();
  VOID     *MEMSET  ();

# endif

#endif
