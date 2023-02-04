/*════════════════════════════════════════╦═════════════════════════════╗
║ C - MALLOC                              ║       Maximum Tension       ║
╠═════════════════════════════════════════╬═════════════════════════════╣
║                                         │      ▄▄▄            ▄▄▄     ║
║ Teoman Deniz                            │  ░    ░▒▓▒▄▄    ▄▄▒▓▒░    ░ ║
║ maximum-tension.com                     │  ░░                      ░░ ║
║                                         │  ░▒░    ░ ░░ ░ ░  ░  ░░░░▒░ ║
║ ╔───┬──────────────────╗                │   ░▒░░ ░▒░▒▓░▒░▒░░▓░░░▒▒▒░  ║
║ │ © │ Maximum Tension  │ ┌──────────────┤   ░░▒░░▒▒▓██▓█▓█▒░▒▓▓▒▒░░   ║
║ ├───┴─────┬────────────┤ │ C 2023/01/25 │   ░▒▓▒▒▓▓██████████▓▓▒▒░    ║
║ │ License │ GNU        │ │──────────────│    ░░░░▒▒▒▓▒▒▓▒▒▒▓▒▒▒░░     ║
║ ╚─────────┴────────────╝ │ U 2023/02/05 │       ░░░░▒░░▒░░░▒░░░░      ║
╚══════════════════════════╩══════════════╩════════════════════════════*/

#include	"../#C_MT.h"

STATIC INLINE VOID
	*MALLOC_HELP(INT *__TEMP__)
{
	TYPEOF(VOID *) RESULT = (VOID *) __TEMP__;
	RETURN ((VOID *) RESULT);
}

VOID
	*MALLOC(REGISTER UNSIGNED INT SIZE)
{
	IF (!SIZE || SIZE == 0)
	{
		STATIC INT (__TEMP__)[0];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE == 1)
	{
		STATIC INT (__TEMP__)[1];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE == 2)
	{
		STATIC INT (__TEMP__)[2];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 4)
	{
		STATIC INT (__TEMP__)[4];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 8)
	{
		STATIC INT (__TEMP__)[8];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 16)
	{
		STATIC INT (__TEMP__)[16];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 32)
	{
		STATIC INT (__TEMP__)[32];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 64)
	{
		STATIC INT (__TEMP__)[64];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 128)
	{
		STATIC INT (__TEMP__)[128];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 256)
	{
		STATIC INT (__TEMP__)[256];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 512)
	{
		STATIC INT (__TEMP__)[512];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 1024)
	{
		STATIC INT (__TEMP__)[1024];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 2048)
	{
		STATIC INT (__TEMP__)[2048];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 4096)
	{
		STATIC INT (__TEMP__)[4096];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 8192)
	{
		STATIC INT (__TEMP__)[8192];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 16384)
	{
		STATIC INT (__TEMP__)[16384];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 32768)
	{
		STATIC INT (__TEMP__)[32768];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 65536)
	{
		STATIC INT (__TEMP__)[65536];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 131072)
	{
		STATIC INT (__TEMP__)[131072];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 262144)
	{
		STATIC INT (__TEMP__)[262144];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 524288)
	{
		STATIC INT (__TEMP__)[524288];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 1048576)
	{
		STATIC INT (__TEMP__)[1048576];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 2097152)
	{
		STATIC INT (__TEMP__)[2097152];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 4194304)
	{
		STATIC INT (__TEMP__)[4194304];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 8388608)
	{
		STATIC INT (__TEMP__)[8388608];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 16777216)
	{
		STATIC INT (__TEMP__)[16777216];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 33554432)
	{
		STATIC INT (__TEMP__)[33554432];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	IF (SIZE <= 67108864)
	{
		STATIC INT (__TEMP__)[67108864];
		RETURN (MALLOC_HELP(__TEMP__));
	}

	STATIC INT (__TEMP__)[134217728];
	RETURN (MALLOC_HELP(__TEMP__));
}
