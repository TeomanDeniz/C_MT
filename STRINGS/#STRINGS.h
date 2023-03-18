/*════════════════════════════════════════╦═════════════════════════════╗
║ H - STRINGS                             ║       Maximum Tension       ║
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

#ifndef STRINGS_H

# define STRINGS_H

# ifdef __STDC__ // GNU ISO STANDARD C LANGUAGE

  DOUBLE    ATOF           (CONST CHAR *RESTRICT STRING);
  INT       ATOI           (CONST CHAR *STRING);
  CHAR     *ITOA           (REGISTER INT NUMBER);
  CHAR      LOWER_CASE     (REGISTER CHAR CHARACTER);
  CHAR     *RELPACE_STRING (CHAR* STRING, CHAR* OLD, CHAR* NEW);
  CHAR    **SPLIT          (CHAR CONST *STRING, CHAR CHARACTER);
  INT       STRCASECMP     (CONST CHAR *RESTRICT STRING_1, CONST CHAR *RESTRICT STRING_2);
  CHAR     *STRCAT         (CHAR CONST *STRING_1, CONST CHAR *STRING_2);
  CHAR     *STRCHR         (CONST CHAR *STRING, REGISTER INT CHARACTER);
  INT       STRCMP         (CONST CHAR *STRING_1, CONST CHAR *STRING_2);
  CHAR     *STRCPY         (CHAR *STRING_1, CONST CHAR *STRING_2);
  CHAR     *STRDUP         (CONST CHAR *STRING);
  VOID      STRITERI       (CHAR *STRING, VOID (*FUNCTION)(UNSIGNED INT, CHAR *));
  CHAR     *STRJOIN        (CONST CHAR **RESTRICT STRINGS, CHAR *RESTRICT JOIN_STRING);
  SIZE_T    STRLCAT        (CHAR *DST, CONST CHAR *RESTRICT SRC, REGISTER SIZE_T DST_SIZE);
  SIZE_T    STRLCPY        (CHAR *DST, CONST CHAR *SRC, REGISTER SIZE_T SIZE);
  INT       STRLEN         (CONST CHAR *RESTRICT STRING);
  CHAR     *STRMAPI        (CHAR CONST *STRING, CHAR (*FUNCTION)(UNSIGNED INT, CHAR));
  INT       STRNCMP        (CONST CHAR *RESTRICT STRING_1, CONST CHAR *RESTRICT STRING_2, CONST SIZE_T SIZE);
  CHAR     *STRNSTR        (CONST CHAR *HAYSTACK, CONST CHAR *RESTRICT NEEDLE, CONST SIZE_T LEN);
  CHAR     *STRRCHR        (CONST CHAR *STRING, REGISTER INT CHARACTER);
  CHAR     *STRSTR         (CHAR *STRING, CHAR *RESTRICT SUB_STRING);
  CHAR     *STRTRIM        (CHAR CONST *STRING_1, CHAR CONST *STRING_2);
  CHAR     *SUBSTR         (CHAR CONST *STRING, REGISTER UNSIGNED INT START, REGISTER SIZE_T LEN);
  CHAR      UPPER_CASE     (REGISTER CHAR CHARACTER);

# else // K&R C LANGUAGE

  DOUBLE    ATOF           ();
  INT       ATOI           ();
  CHAR     *ITOA           ();
  CHAR      LOWER_CASE     ();
  CHAR     *RELPACE_STRING ();
  CHAR    **SPLIT          ();
  INT       STRCASECMP     ();
  CHAR     *STRCAT         ();
  CHAR     *STRCHR         ();
  INT       STRCMP         ();
  CHAR     *STRCPY         ();
  CHAR     *STRDUP         ();
  VOID      STRITERI       ();
  CHAR     *STRJOIN        ();
  SIZE_T    STRLCAT        ();
  SIZE_T    STRLCPY        ();
  INT       STRLEN         ();
  CHAR     *STRMAPI        ();
  INT       STRNCMP        ();
  CHAR     *STRNSTR        ();
  CHAR     *STRRCHR        ();
  CHAR     *STRSTR         ();
  CHAR     *STRTRIM        ();
  CHAR     *SUBSTR         ();
  CHAR      UPPER_CASE     ();

# endif

#endif
