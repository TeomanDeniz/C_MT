/*════════════════════════════════════════╦═════════════════════════════╗
║ H - IO                                  ║       Maximum Tension       ║
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

#ifndef IO_H

# define IO_H

# ifdef __STDC__ // GNU ISO STANDARD C LANGUAGE

  INT       GETCHAR       (VOID);
  CHAR     *GETS          (CHAR *STRING);
  VOID      PUT_CHAR      (CHAR CHARACTER);
  VOID      PUT_CHAR_FD   (CHAR CHARACTER, REGISTER INT FD);
  VOID      PUT_NUMBER    (REGISTER INT NUMBER);
  VOID      PUT_NUMBER_FD (REGISTER INT NUMBER, REGISTER INT FD);
  VOID      PUT_STR       (CHAR *STRING);
  VOID      PUT_STR_FD    (CHAR *STRING, REGISTER INT FD);

# else // K&R C LANGUAGE

  INT       GETCHAR       ();
  CHAR     *GETS          ();
  VOID      PUT_CHAR      ();
  VOID      PUT_CHAR_FD   ();
  VOID      PUT_NUMBER    ();
  VOID      PUT_NUMBER_FD ();
  VOID      PUT_STR       ();
  VOID      PUT_STR_FD    ();

# endif

#endif
