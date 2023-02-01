<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1054176738168549456/maximum-tension.png" STYLE="WIDTH: 572PX; HEIGHT: 156PX;"></P>

<P ALIGN="CENTER">A library for C Language that's make you able to use all keywords uppercase and most of functions written from scratch</P>

# KEYWORDS
| TYPES            | COMMANDS       | LISTS TYPES |
| ---------------- | -------------- | ----------- |
| \_\_VOLATILE\_\_ | CONTINUE       | TYPEDEF     |
| \_\_INLINE\_\_   | \_\_ASM\_\_    | STRUCT      |
| UNSIGNED         | DEFAULT        | UNION       |
| REGISTER         | RETURN         | BOOL        |
| RESTRICT         | SWITCH         | ENUM        |
| VOLATILE         | TYPEOF         |             |
| __INT64          | BREAK          |             |
| SSIZE_T          | WHILE          |             |
| DOUBLE           | ELSE           |             |
| EXTERN           | CASE           |             |
| SIGNED           | GOTO           |             |
| SIZE_T           | ASM            |             |
| STATIC           | FOR            |             |
| INLINE           | DO             |             |
| CONST            | IF             |             |
| FLOAT            |                |             |
| INT16            |                |             |
| SHORT            |                |             |
| AUTO             |                |             |
| CHAR             |                |             |
| LONG             |                |             |
| VOID             |                |             |
| INT              |                |             |

# FUNCTIONS
| FUNCTION OUTPUT | FUNCTION NAMES                                                                               | PARAMETER FUNCTION GETS                             | DESCRIPTION                                                          |
| --------------- | -------------------------------------------------------------------------------------------- | --------------------------------------------------- | -------------------------------------------------------------------- |
| `{ALL TYPES}`   | **[ABS](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L379)**                      | `{ALL TYPES}` NUMBER                                | CONVERTS `NUMBER` TO POSITIVE IF NEGATIVE                            |
| `INT`           | **[ATOI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/ATOI.c)**                     | `CHAR *` STRING                                     | CONVERTS `STRING` TO NUMBER                                          |
| `VOID *`        | **[CALLOC](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/CALLOC.c)**                  | `SIZE_T` COUNT, `SIZE_T` SIZE                       | LOCATE MEMORY IN ORDERED SIZE AND GIVE VALUE `0`                     |
|                 | **[FREE](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L380)**                     | `VOID *` INPUT                                      | RESET, REMOVE OR DELETE POINTER                                      |
| `SHORT INT`     | **[GET_BYTE](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/GET_BYTE.c)**              | `LONG LONG` INPUT                                   | COUNTS HOW MANY BYTES VARIABLE USING                                 |
| `CHAR`          | **[GET_PATH](https://github.com/TeomanDeniz/C_MT/blob/main/FILE/GET_PATH.c)**                | `INT` CHOICE                                        | GETS THE LOCATION OF THE PROGRAM ITSELF                              |
| `CHAR *`        | **[GET_LINE](https://github.com/TeomanDeniz/C_MT/blob/main/FILE/GET_LINE.c)**                | `INT` FD                                            | READ ONE LINE FROM ORDERED FILE                                      |
| `INT`           | **[GETCHAR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/GETCHAR.c)**                    |                                                     | GETS A CHARACTER INPUT                                               |
| `CHAR *`        | **[GETS](https://github.com/TeomanDeniz/C_MT/blob/main/IO/GETS.c)**                          | `CHAR *` STRING                                     | GETS STRING INPUT FROM TERMINAL AND SAVES IT TO VARIABLE             |
|                 | **[GOTOXY](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/GOTOXY.c)**                 | `INT` X, `INT` Y                                    | MOVES THE TEXT CURSOR TO ORDERED COORDINATES IN TERMINAL             |
| `CHAR *`        | **[ITOA](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/ITOA.c)**                     | `INT` NUMBER                                        | CONVERTS INTEGER TO STRING                                           |
| `CHAR`          | **[LOWER_CASE](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/LOWER_CASE.c)**         | `CHAR` CHARACTER                                    | CONVERTS UPPER CASE CHARACTER TO LOWER CASE                          |
| `VOID *`        | **[MALLOC](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MALLOC.c)**                  | `UNSIGNED INT` SIZE                                 | LOCATES MEMORY IN ORDERED `SIZE`                                     |
| `{ALL TYPES}`   | **[MAX](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L390)**                      | `{ALL TYPES}` A, `{ALL TYPES}` B                    | RETURNS BIGGES VALUE BETWEEN `A` AND `B`                             |
| `VOID *`        | **[MEMCHR](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCHR.c)**                  | `VOID *` OBJECT, `INT` CHARACTER, `SIZE_T` LEN      | SEARCHES ORDERED `CHARACTER` IN `OBJECT` WITHIN GIVEN `SIZE`         |
| `INT`           | **[MEMCMP](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCMP.c)**                  | `VOID *` OBJECT_1, `VOID *` OBJECT_2, `SIZE_T` LEN  | COMPARES TWO `OBJECTS` WITHIN GIVEN `SIZE`                           |
| `VOID *`        | **[MEMCPY](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCPY.c)**                  | `VOID *` DEST, `VOID *` SRC, `SIZE_T` SIZE          | COPIES `SRC` TO `DEST` WITHIN GIVEN `SIZE`                           |
| `VOID *`        | **[MEMMOVE](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMMOVE.c)**                | `VOID *` DST, `VOID *` SRC, `SIZE_T` LEN            | COPIES THE DATA TO AN INTERMEDIATE BUFFER THEN CONNECTS IT'S ADDRESS |
| `VOID *`        | **[MEMSET](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMSET.c)**                  | `VOID *` OBJECT, `INT` INPUT, `SIZE_T`, SIZE        | SETS VALUE INSIDE OF THE `OBJECT` WITHIN GIVEN `SIZE`                |
| `{ALL TYPES}`   | **[MIN](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L396)**                      | `{ALL TYPES}` A, `{ALL TYPES}` B                    | RETURNS SMALLEST VALUE BETWEEN `A` AND `B`                           |
| `DOUBLE`        | **[POW](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/POW.c#L35)**                      | `DOUBLE` NUMBER, `SIGNED INT` POWER                 | CALCULATING GIVEN EXPONENTIAL NUMBER AS `DOUBLE`                     |
| `LONG LONG`     | **[POW_INT](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/POW.c#L17)**                  | `LONG LONG` NUMBER, `SIGNED INT` POWER              | CALCULATING GIVEN EXPONENTIAL NUMBER AS `LONG LONG`                  |
|                 | **[PUT_CHAR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_CHAR.c#L23)**              | `CHAR` CHARACTER                                    | PRINTS A SINGLE CHARACTER TO TERMINAL                                |
|                 | **[PUT_CHAR_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_CHAR.c#L17)**           | `CHAR` CHARACTER, `INT` FD                          | PRINTS A SINGLE CHARACTER TO ORDERED FILE                            |
|                 | **[PUT_NUMBER](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_NUMBER.c#L38)**          | `INT` NUMBER                                        | PRINTS INTEGER NUMBER TO TERMINAL                                    |
|                 | **[PUT_NUMBER_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_CHAR.c#L23)**         | `INT` NUMBER, `INT` FD                              | PRINTS INTEGER NUMBER TO ORDERED FILE                                |
|                 | **[PUT_STR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_STR.c#L26)**                | `CHAR *` STRING                                     | PRINTS `STRING` TO TERMINAL                                          |
|                 | **[PUT_STR_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_STR.c#L17)**             | `CHAR *` STRING, `INT` FD                           | PRINTS `STRING` TO ORDERED FILE                                      |
| `INT`           | **[PRINTF](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/PRINTF.c#L785)**            | `CHAR` __, `...`                                    | SAME WITH PRINTF, CAN USE BOTH UPPERCASE AND LOWERCASE COMMANDS      |
| `INT`           | **[PRINTF_FD](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/PRINTF.c#L818)**         | `INT` FD, `CHAR` __, `...`                          | SAME WITH PRINTF, PRINT THE PRINTF STRING TO ORDERED FILE            |
| `CHAR *`        | **[REPLACE_STRING](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/REPLACE_STRING.c)** | `CHAR *` STRING, `CHAR *` OLD, `CHAR *` NEW         | FIND `OLD` IN `STRING` AND REPLACE IT WITH `NEW`                     |
| `CHAR`          | **[SIZEOF](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L385)**                   | `{ALL TYPES}` VARIABLE                              | THE REMAKE OF ORIGINAL `SIZEOF` (WORKS SAME)                         |
| `CHAR **`       | **[SPLIT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/SPLIT.c)**                   | `CHAR *` STRING, `CHAR` CHARACTER                   | CUT THE `STRING` TO STRINGS VIA ORDERED `CHARACTER`                  |
| `CHAR *`        | **[STRCAT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCAT.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | CONSUBSTANTIATE TWO STRINGS                                          |
| `CHAR`          | **[STRCHR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCHR.c)**                 | `CHAR *` STRING, `CHAR` CHARACTER                   | SEARCH THE ORDERED `CHARACTER` INSIDE `STRING`                       |
| `INT`           | **[STRCMP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCMP.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | COMAPRE TWO STRINGS                                                  |
| `CHAR *`        | **[STRCPY](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCPY.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | COPIES `STRING_2` IN TO `STRING_1`                                   |
| `CHAR *`        | **[STRDUP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRDUP.c)**                 | `CHAR *` STRING                                     | DUPLICATES `STRING`                                                  |
|                 | **[STRITERI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRITERI.c)**             | `CHAR *` STRING, `VOID` F(`UNSIGNED INT`, `CHAR *`) | USING THE STRING PER ++ UNTILL STRING REACHED ONLY `\0` CHARACTER    |
| `SIZE_T`        | **[STRLCAT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLCAT.c)**               | `CHAR *` DST, `CHAR *` SRC, `SIZE_T` DST_SIZE       | CONSUBSTANTIATE TWO STRINGS AND SAVE IT TO `DST`                     |
| `SIZE_T`        | **[STRLCPY](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLCPY.c)**               | `CHAR *` DST, `CHAR *` SRC, `SIZE_T` SIZE           | COPY `SRC` TO `DST` IN ORDERED SIZE                                  |
| `INT`           | **[STRLEN](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLEN.c)**                 | `CHAR *` STRING                                     | COUNTS HOW MANY CHARACTER STRING HAS (NON UNICODE)                   |
| `CHAR *`        | **[STRMAPI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRMAPI.c)**               | `CHAR *` STRING, `CHAR` F(`UNSIGNED INT`, `CHAR`)   | DO JOBS WITH EVERY CHARACTER IN `STRING` VIA USING `F()` FUNCTION    |
| `INT`           | **[STRNCMP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRNCMP.c)**               | `CHAR *` STRING_1, `CHAR *` STRING_2, `SIZE_T` SIZE | COMPARE TWO STRINGS UNTILL GIVEN `SIZE`                              |
| `CHAR *`        | **[STRNSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRNSTR.c)**               | `CHAR *` HAYSTACK, `CHAR *` NEEDLE, `SIZE_T` LEN    | GIVING REST OF THE `HAYSTACK` UNTILL FINDS `NEELE` IN ORERED `LEN`   |
| `CHAR *`        | **[STRRCHR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRRCHR.c)**               | `CHAR *` STRING, `INT` CHARACTER                    | SEARCHES THE LAST CHARACTER AND THEN RETURNS REST OF THE STRING      |
| `CHAR *`        | **[STRSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRSTR.c)**                 | `CHAR *` STRING, `CHAR *` SUB_STRING                | GIVING REST OF THE `STRING` UNSTILL FINDS THE `SUB_STRING` IN IT     |
| `CHAR *`        | **[STRTRIM](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRTRIM.c)**               | `CHAR *` STRING_1, `CHAR *` STRING_2                | REMOVES `STRING_2`S LEFT TO RIGHT IN `STRING_1`                      |
| `CHAR *`        | **[SUBSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/SUBSTR.c)**                 | `CHAR *` STRING, `INT` START, `SIZE_T` LEN          | CUT A STRING INSIE OF THE `STRING` IN ORDERED COORDINATES            |
| `CHAR`          | **[UPPER_CASE](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/UPPER_CASE.c)**         | `CHAR` CHARACTER                                    | CONVERTS LOWER CASE CHARACTER TO UPPER CASE                          |
