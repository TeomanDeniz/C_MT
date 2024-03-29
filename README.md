<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1070507490132885584/maximum-tension.gif" STYLE="WIDTH: 572PX; HEIGHT: 156PX;"></P>

<P ALIGN="CENTER">A library for C Language that's make you able to use all keywords uppercase and most of functions written from scratch</P>

# KEYWORDS
| TYPES            | COMMANDS       | LIST TYPES  | SETTINGS          |
| ---------------- | -------------- | ----------- | ----------------- |
| \_\_VOLATILE\_\_ | \_\_TYPEOF\_\_ | TYPEDEF     | \_\_ATTRIBUTE\_\_ |
| \_\_INLINE\_\_   | CONTINUE       | STRUCT      | \_\_EXTENSION\_\_ |
| UNSIGNED         | \_\_ASM\_\_    | UNION       |                   |
| REGISTER         | DEFAULT        | BOOL        |                   |
| RESTRICT         | RETURN         | ENUM        |                   |
| VOLATILE         | SWITCH         |             |                   |
| __INT64          | TYPEOF         |             |                   |
| SSIZE_T          | BREAK          |             |                   |
| DOUBLE           | WHILE          |             |                   |
| EXTERN           | ELSE           |             |                   |
| SIGNED           | CASE           |             |                   |
| SIZE_T           | GOTO           |             |                   |
| STATIC           | ASM            |             |                   |
| INLINE           | FOR            |             |                   |
| CONST            | DO             |             |                   |
| FLOAT            | IF             |             |                   |
| INT16            |                |             |                   |
| SHORT            |                |             |                   |
| AUTO             |                |             |                   |
| CHAR             |                |             |                   |
| LONG             |                |             |                   |
| VOID             |                |             |                   |
| INT              |                |             |                   |

# FUNCTIONS
| FUNCTION OUTPUT | FUNCTION NAMES                                                                               | PARAMETER FUNCTION GETS                             | DESCRIPTION                                                              |
| --------------- | -------------------------------------------------------------------------------------------- | --------------------------------------------------- | ------------------------------------------------------------------------ |
| `{ALL TYPES}`   | **[ABS](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L439)**                      | `{ALL TYPES}` NUMBER                                | CONVERTS `NUMBER` TO POSITIVE IF NEGATIVE                                |
| `DOUBLE`        | **[ATOF](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/ATOF.c)**                     | `CHAR *` STRING                                     | CONVERTS `STRING` TO FLOAT POINT NUMBER                                  |
| `INT`           | **[ATOI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/ATOI.c)**                     | `CHAR *` STRING                                     | CONVERTS `STRING` TO NUMBER                                              |
| `SHORT INT`     | **[BITLEN](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/BITLEN.c)**                  | `LONG LONG` INPUT                                   | COUNTS HOW MANY BITS VARIABLE USING                                      |
| `INT`           | **[BITSIGN](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/BITSIGN.c)**                | `LONG LONG` INPUT                                   | CHECK IF THE SIGN BIT IS `1` OR `0` (AKA: THE LAST BIT IN THE BYTE)      |
| `SHORT INT`     | **[BYTELEN](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/BYTELEN.c)**                | `LONG LONG` INPUT                                   | COUNTS HOW MANY BYTES VARIABLE USING                                     |
| `VOID *`        | **[CALLOC](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/CALLOC.c)**                  | `SIZE_T` COUNT, `SIZE_T` SIZE                       | LOCATE MEMORY IN ORDERED SIZE AND GIVE VALUE `0`                         |
| `DOUBLE`        | **[COS](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/COS.c)**                          | `DOUBLE` X                                          | COSINE OF THE GIVEN `X`                                                  |
| `DOUBLE`        | **[FABS](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/FABS.c)**                        | `DOUBLE` X                                          | CONVERTS `NUMBER` TO POSITIVE IF NEGATIVE (FLOAT)                        |
| `DOUBLE`        | **[FMOD](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/FMOD.c)**                        | `DOUBLE` X, `DOUBLE` Y                              | MODULAR ARITHMETIC OF `X` AND `Y` (AKA: MOD `%`)                         |
|                 | **[FREE](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L440)**                     | `VOID *` INPUT                                      | RESET, REMOVE OR DELETE POINTER                                          |
| `CHAR *`        | **[GET_LINE](https://github.com/TeomanDeniz/C_MT/blob/main/FILE/GET_LINE.c#L209)**           | `INT` FD                                            | READ ONE LINE FROM ORDERED FILE                                          |
| `INT`           | **[GETCHAR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/GETCHAR.c)**                    |                                                     | GETS A CHARACTER INPUT                                                   |
| `CHAR *`        | **[GETS](https://github.com/TeomanDeniz/C_MT/blob/main/IO/GETS.c)**                          | `CHAR *` STRING                                     | GETS STRING INPUT FROM TERMINAL AND SAVES IT TO VARIABLE                 |
|                 | **[GOTOXY](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/GOTOXY.c)**                 | `INT` X, `INT` Y                                    | MOVES THE TEXT CURSOR TO ORDERED COORDINATES IN TERMINAL                 |
| `INT`           | **[IS_ARRAY](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L463)**                 | `{ALL TYPES}` VARIABLE                              | CHECK IF `VARIABLE` ARRAY (RETURNS 1 AS TRUE)                            |
| `INT`           | **[IS_POINTER](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L464)**               | `{ALL TYPES}` VARIABLE                              | CHECK IF `VARIABLE` POINTER (RETURNS 1 AS TRUE)                          |
| `CHAR *`        | **[ITOA](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/ITOA.c)**                     | `INT` NUMBER                                        | CONVERTS INTEGER TO STRING                                               |
| `DOUBLE`        | **[LOG](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/LOG.c)**                          | `DOUBLE` X                                          | INVERSE FUNCTION TO EXPONENTIATION                                       |
| `DOUBLE`        | **[LOG10](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/LOG10.c)**                      | `DOUBLE` X                                          | LOGARITHM OF `X` TO THE BASE OF 10                                       |
| `CHAR`          | **[LOWER_CASE](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/LOWER_CASE.c)**         | `CHAR` CHARACTER                                    | CONVERTS UPPER CASE CHARACTER TO LOWER CASE                              |
| `VOID *`        | **[MALLOC](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MALLOC.c#L4057)**            | `UNSIGNED INT` SIZE                                 | LOCATES MEMORY IN ORDERED `SIZE`                                         |
| `{ALL TYPES}`   | **[MAX](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L450)**                      | `{ALL TYPES}` A, `{ALL TYPES}` B                    | RETURNS BIGGES VALUE BETWEEN `A` AND `B`                                 |
| `VOID *`        | **[MEMCHR](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCHR.c)**                  | `VOID *` OBJECT, `INT` CHARACTER, `SIZE_T` LEN      | SEARCHES ORDERED `CHARACTER` IN `OBJECT` WITHIN GIVEN `SIZE`             |
| `INT`           | **[MEMCMP](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCMP.c)**                  | `VOID *` OBJECT_1, `VOID *` OBJECT_2, `SIZE_T` LEN  | COMPARES TWO `OBJECTS` WITHIN GIVEN `SIZE`                               |
| `VOID *`        | **[MEMCPY](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMCPY.c)**                  | `VOID *` DEST, `VOID *` SRC, `SIZE_T` SIZE          | COPIES `SRC` TO `DEST` WITHIN GIVEN `SIZE`                               |
| `VOID *`        | **[MEMMOVE](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMMOVE.c)**                | `VOID *` DST, `VOID *` SRC, `SIZE_T` LEN            | COPIES THE DATA TO AN INTERMEDIATE BUFFER THEN CONNECTS IT'S ADDRESS     |
| `VOID *`        | **[MEMSET](https://github.com/TeomanDeniz/C_MT/blob/main/MEMORY/MEMSET.c)**                  | `VOID *` OBJECT, `INT` INPUT, `SIZE_T`, SIZE        | SETS VALUE INSIDE OF THE `OBJECT` WITHIN GIVEN `SIZE`                    |
| `{ALL TYPES}`   | **[MIN](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L456)**                      | `{ALL TYPES}` A, `{ALL TYPES}` B                    | RETURNS SMALLEST VALUE BETWEEN `A` AND `B`                               |
| `DOUBLE`        | **[POW](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/POW.c)**                          | `DOUBLE` X, `SIGNED INT` POWER                      | CALCULATING GIVEN EXPONENTIAL NUMBER AS `DOUBLE`                         |
|                 | **[PUT_CHAR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_CHAR.c#L30)**              | `CHAR` CHARACTER                                    | PRINTS A SINGLE CHARACTER TO TERMINAL                                    |
|                 | **[PUT_CHAR_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_CHAR.c#L16)**           | `CHAR` CHARACTER, `INT` FD                          | PRINTS A SINGLE CHARACTER TO ORDERED FILE                                |
|                 | **[PUT_NUMBER](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_NUMBER.c#L45)**          | `INT` NUMBER                                        | PRINTS INTEGER NUMBER TO TERMINAL                                        |
|                 | **[PUT_NUMBER_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_NUMBER.c#L16)**       | `INT` NUMBER, `INT` FD                              | PRINTS INTEGER NUMBER TO ORDERED FILE                                    |
|                 | **[PUT_STR](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_STR.c#L33)**                | `CHAR *` STRING                                     | PRINTS `STRING` TO TERMINAL                                              |
|                 | **[PUT_STR_FD](https://github.com/TeomanDeniz/C_MT/blob/main/IO/PUT_STR.c#L16)**             | `CHAR *` STRING, `INT` FD                           | PRINTS `STRING` TO ORDERED FILE                                          |
| `INT`           | **[PRINTF](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/PRINTF.c#L1106)**           | `CHAR` __, `...`                                    | SAME WITH PRINTF, CAN USE BOTH UPPERCASE AND LOWERCASE COMMANDS          |
| `INT`           | **[PRINTF_FD](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/PRINTF.c#L1163)**        | `INT` FD, `CHAR` __, `...`                          | SAME WITH PRINTF, PRINT THE PRINTF STRING TO ORDERED FILE                |
| `INT`           | **[RANDOM](https://github.com/TeomanDeniz/C_MT/blob/main/MODULES/RANDOM.c)**                 | `INT` MIN, `INT` MAX                                | GIVE A RANDOM INTEGER NUMBER BETWEEN `MIN` AND `MAX`                     |
| `CHAR *`        | **[REPLACE_STRING](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/REPLACE_STRING.c)** | `CHAR *` STRING, `CHAR *` OLD, `CHAR *` NEW         | FIND `OLD` IN `STRING` AND REPLACE IT WITH `NEW`                         |
| `DOUBLE`        | **[SIN](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/SIN.c)**                          | `DOUBLE` X                                          | SINE OF THE GIVEN `X`                                                    |
| `CHAR`          | **[SIZEOF](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L445)**                   | `{ALL TYPES}` VARIABLE                              | THE REMAKE OF ORIGINAL `SIZEOF`                                          |
| `CHAR **`       | **[SPLIT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/SPLIT.c)**                   | `CHAR *` STRING, `CHAR` CHARACTER                   | CUT THE `STRING` TO STRINGS VIA ORDERED `CHARACTER`                      |
| `DOUBLE`        | **[SQRT](https://github.com/TeomanDeniz/C_MT/blob/main/MATH/SQRT.c)**                        | `DOUBLE` X                                          | FINDING THE SQUARE ROOT OF A NUMBER                                      |
| `INT`           | **[STRCASECMP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCASECMP.c)**         | `CHAR *` STRING_1, `CHAR *` STRING_2                | COMAPERS TWO STRINGS AND IGNORES APLHABETIC CHARACTERS' CASES            |
| `CHAR *`        | **[STRCAT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCAT.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | CONSUBSTANTIATE TWO STRINGS                                              |
| `CHAR`          | **[STRCHR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCHR.c)**                 | `CHAR *` STRING, `CHAR` CHARACTER                   | SEARCH THE ORDERED `CHARACTER` INSIDE `STRING`                           |
| `INT`           | **[STRCMP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCMP.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | COMAPRE TWO STRINGS                                                      |
| `CHAR *`        | **[STRCPY](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRCPY.c)**                 | `CHAR *` STRING_1, `CHAR *` STRING_2                | COPIES `STRING_2` IN TO `STRING_1`                                       |
| `CHAR *`        | **[STRDUP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRDUP.c)**                 | `CHAR *` STRING                                     | DUPLICATES `STRING`                                                      |
|                 | **[STRITERI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRITERI.c)**             | `CHAR *` STRING, `VOID` F(`UNSIGNED INT`, `CHAR *`) | USING THE STRING PER ++ UNTILL STRING REACHED ONLY `\0` CHARACTER        |
| `CHAR *`        | **[STRJOIN](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRJOIN.c)**               | `CHAR **` STRINGS, `CHAR *` JOIN_STRING             | JOIN THE ALL STRINGS IN `STRINGS` AND PUT `JOIN_STRING` BETWEEN THEM     |
| `SIZE_T`        | **[STRLCAT](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLCAT.c)**               | `CHAR *` DST, `CHAR *` SRC, `SIZE_T` DST_SIZE       | CONSUBSTANTIATE TWO STRINGS AND SAVE IT TO `DST`                         |
| `SIZE_T`        | **[STRLCPY](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLCPY.c)**               | `CHAR *` DST, `CHAR *` SRC, `SIZE_T` SIZE           | COPY `SRC` TO `DST` IN ORDERED SIZE                                      |
| `INT`           | **[STRLEN](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRLEN.c)**                 | `CHAR *` STRING                                     | COUNTS HOW MANY CHARACTER STRING HAS (NON UNICODE)                       |
| `CHAR *`        | **[STRMAPI](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRMAPI.c)**               | `CHAR *` STRING, `CHAR` F(`UNSIGNED INT`, `CHAR`)   | DO JOBS WITH EVERY CHARACTER IN `STRING` VIA USING `F()` FUNCTION        |
| `INT`           | **[STRNCMP](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRNCMP.c)**               | `CHAR *` STRING_1, `CHAR *` STRING_2, `SIZE_T` SIZE | COMPARE TWO STRINGS UNTILL GIVEN `SIZE`                                  |
| `CHAR *`        | **[STRNSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRNSTR.c)**               | `CHAR *` HAYSTACK, `CHAR *` NEEDLE, `SIZE_T` LEN    | GIVING REST OF THE `HAYSTACK` UNTILL FINDS `NEELE` IN ORERED `LEN`       |
| `CHAR *`        | **[STRRCHR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRRCHR.c)**               | `CHAR *` STRING, `INT` CHARACTER                    | SEARCHES THE LAST CHARACTER AND THEN RETURNS REST OF THE STRING          |
| `CHAR *`        | **[STRSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRSTR.c)**                 | `CHAR *` STRING, `CHAR *` SUB_STRING                | GIVING REST OF THE `STRING` UNSTILL FINDS THE `SUB_STRING` IN IT         |
| `CHAR *`        | **[STRTRIM](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/STRTRIM.c)**               | `CHAR *` STRING_1, `CHAR *` STRING_2                | REMOVES `STRING_2`S LEFT TO RIGHT IN `STRING_1`                          |
| `CHAR *`        | **[SUBSTR](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/SUBSTR.c)**                 | `CHAR *` STRING, `INT` START, `SIZE_T` LEN          | CUT A STRING INSIE OF THE `STRING` IN ORDERED COORDINATES                |
| `INT`           | **[TYPECMP](https://github.com/TeomanDeniz/C_MT/blob/main/%23C_MT.h#L462)**                  | `{ALL TYPES}`, `{ALL TYPES}`                        | COMPARE VARIABLES' TYPES OR JUST TYPES (RETURNS 1 AS TRUE)               |
| `CHAR`          | **[UPPER_CASE](https://github.com/TeomanDeniz/C_MT/blob/main/STRINGS/UPPER_CASE.c)**         | `CHAR` CHARACTER                                    | CONVERTS LOWER CASE CHARACTER TO UPPER CASE                              |
