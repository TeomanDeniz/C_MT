<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1054176738168549456/maximum-tension.png" STYLE="WIDTH: 572PX; HEIGHT: 156PX;"></P>

<P ALIGN="CENTER">A library for C Language that's make you able to use all keywords uppercase and most of functions written from scratch</P>

| FUNCTION OUTPUT | FUNCTION NAMES        | PARAMETER FUNCTION GETS                            | DESCRIPTION                                                          |
| --------------- | --------------------- | -------------------------------------------------- | -------------------------------------------------------------------- |
| `{ALL TYPES}`   | **ABS**               | `{ALL TYPES}` NUMBER                               | CONVERTS `NUMBER` TO POSITIVE IF NEGATIVE                            |
| `INT`           | **ATOI**              | `CHAR *` STRING                                    | CONVERTS `STRING` TO NUMBER                                          |
| `VOID *`        | **CALLOC**            | `SIZE_T` COUNT, `SIZE_T` SIZE                      | LOCATE MEMORY IN ORDERED SIZE AND GIVE VALUE `0`                     |
|                 | **FREE**              | `VOID *` INPUT                                     | RESET, REMOVE OR DELETE POINTER                                      |
| `SHORT INT`     | **GET_BYTE**          | `LONG LONG` INPUT                                  | COUNTS HOW MANY BYTES VARIABLE USING                                 |
| `CHAR`          | **GET_PATH**          | `INT` CHOICE                                       | GETS THE LOCATION OF THE PROGRAM ITSELF                              |
| `CHAR *`        | **GET_LINE**          | `INT` FD                                           | READ ONE LINE FROM ORDERED FILE                                      |
| `INT`           | **GETCHAR**           |                                                    | GETS A CHARACTER INPUT                                               |
| `CHAR *`        | **GETS**              | `CHAR *` STRING                                    | GETS STRING INPUT FROM TERMINAL AND SAVES IT TO VARIABLE             |
|                 | **GOTOXY**            | `INT` X, `INT` Y                                   | MOVES THE TEXT CURSOR TO ORDERED COORDINATES IN TERMINAL             |
| `CHAR *`        | **ITOA**              | `INT` NUMBER                                       | CONVERTS INTEGER TO STRING                                           |
| `CHAR`          | **LOWER_CASE**        | `CHAR` CHARACTER                                   | CONVERTS UPPER CASE CHARACTER TO LOWER CASE                          |
| `VOID *`        | **MALLOC**            | `UNSIGNED INT` SIZE                                | LOCATES MEMORY IN ORDERED `SIZE`                                     |
| `{ALL TYPES}`   | **MAX**               | `{ALL TYPES}` A, `{ALL TYPES}` B                   | RETURNS BIGGES VALUE BETWEEN `A` AND `B`                             |
| `VOID *`        | **MEMCHR**            | `VOID *` OBJECT, `INT` CHARACTER, `SIZE_T` LEN     | SEARCHES ORDERED `CHARACTER` IN `OBJECT` WITHIN GIVEN `SIZE`         |
| `INT`           | **MEMCMP**            | `VOID *` OBJECT_1, `VOID *` OBJECT_2, `SIZE_T` LEN | COMPARES TWO `OBJECTS` WITHIN GIVEN `SIZE`                           |
| `VOID *`        | **MEMCPY**            | `VOID *` DEST, `VOID *` SRC, `SIZE_T` SIZE         | COPIES `SRC` TO `DEST` WITHIN GIVEN `SIZE`                           |
| `VOID *`        | **MEMMOVE**           | `VOID *` DST, `VOID *` SRC, `SIZE_T` LEN           | COPIES THE DATA TO AN INTERMEDIATE BUFFER THEN CONNECTS IT'S ADDRESS |
| `VOID *`        | **MEMSET**            | `VOID *` OBJECT, `INT` INPUT, `SIZE_T`, SIZE       | SETS VALUE INSIDE OF THE `OBJECT` WITHIN GIVEN `SIZE`                |
| `{ALL TYPES}`   | **MIN**               | `{ALL TYPES}` A, `{ALL TYPES}` B                   | RETURNS SMALLEST VALUE BETWEEN `A` AND `B`                           |
| `CHAR`          | **UPPER_CASE**        | `CHAR` CHARACTER                                   | CONVERTS LOWER CASE CHARACTER TO UPPER CASE                          |
| `DOUBLE`        | **POW**               | `DOUBLE` NUMBER, `SIGNED INT` POWER                | CALCULATING GIVEN EXPONENTIAL NUMBER AS `DOUBLE`                     |
| `LONG LONG`     | **POW_INT**           | `LONG LONG` NUMBER, `SIGNED INT` POWER             | CALCULATING GIVEN EXPONENTIAL NUMBER AS `LONG LONG`                  |
|                 | **PUT_CHAR**          | `CHAR` CHARACTER                                   | PRINTS A SINGLE CHARACTER TO TERMINAL                                |
|                 | **PUT_CHAR_FD**       | `CHAR` CHARACTER, `INT` FD                         | PRINTS A SINGLE CHARACTER TO ORDERED FILE                            |
|                 | **PUT_NUMBER**        | `INT` NUMBER                                       | PRINTS INTEGER NUMBER TO TERMINAL                                    |
|                 | **PUT_NUMBER_FD**     | `INT` NUMBER, `INT` FD                             | PRINTS INTEGER NUMBER TO ORDERED FILE                                |
|                 | **PUT_STR**           | `CHAR *` STRING                                    | PRINTS `STRING` TO TERMINAL                                          |
|                 | **PUT_STR_FD**        | `CHAR *` STRING, `INT` FD                          | PRINTS `STRING` TO ORDERED FILE                                      |
| `INT`           | **PRINTF**            | `CHAR` __, `...`                                   | SAME WITH PRINTF, CAN USE BOTH UPPERCASE AND LOWERCASE COMMANDS      |
| `INT`           | **PRINTF_FD**         | `INT` FD, `CHAR` __, `...`                         | SAME WITH PRINTF, PRINT THE PRINTF STRING TO ORDERED FILE            |
| `CHAR *`        | **REPLACE_STRING**    | `CHAR *` STRING, `CHAR *` OLD, `CHAR *` NEW        | FIND `OLD` IN `STRING` AND REPLACE IT WITH `NEW`                     |
