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

STATIC INLINE INT
	*_0_1_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_0_[4096][0];
	STATIC INT	_1_[4096][1];

	__ = __ + 0;
	__++;
	IF (SIZE == 0)
		RETURN (_0_[__]);
	RETURN (_1_[__]);
}

STATIC INLINE INT
	*_2_4_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_2_[4096][2];
	STATIC INT	_4_[4096][4];

	__ = __ + 0;
	__++;
	IF (SIZE <= 2)
		RETURN (_2_[__]);
	RETURN (_4_[__]);
}

STATIC INLINE INT
	*_8_16_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_8_[4096][8];
	STATIC INT	_16_[4096][16];

	__ = __ + 0;
	__++;
	IF (SIZE <= 8)
		RETURN (_8_[__]);
	RETURN (_16_[__]);
}

STATIC INLINE INT
	*_32_64_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_32_[4096][32];
	STATIC INT	_64_[4096][64];

	__ = __ + 0;
	__++;
	IF (SIZE <= 32)
		RETURN (_32_[__]);
	RETURN (_64_[__]);
}

STATIC INLINE INT
	*_128_256_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_128_[1024][128];
	STATIC INT	_256_[512][256];

	__ = __ + 0;
	__++;
	IF (SIZE <= 128)
		RETURN (_128_[__]);
	RETURN (_256_[__]);
}

STATIC INLINE INT
	*_512_1024_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_512_[32][512];
	STATIC INT	_1024_[32][1024];

	__ = __ + 0;
	__++;
	IF (SIZE <= 512)
		RETURN (_512_[__]);
	RETURN (_1024_[__]);
}

STATIC INLINE INT
	*_2048_4096_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_2048_[16][2048];
	STATIC INT	_4096_[16][4096];

	__ = __ + 0;
	__++;
	IF (SIZE <= 2048)
		RETURN (_2048_[__]);
	RETURN (_4096_[__]);
}

STATIC INLINE INT
	*_8192_16384_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_8192_[16][8192];
	STATIC INT	_16384_[8][16384];

	__ = __ + 0;
	__++;
	IF (SIZE <= 8192)
		RETURN (_8192_[__]);
	RETURN (_16384_[__]);
}

STATIC INLINE INT
	*_32768_65536_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_32768_[8][32768];
	STATIC INT	_65536_[8][65536];

	__ = __ + 0;
	__++;
	IF (SIZE <= 32768)
		RETURN (_32768_[__]);
	RETURN (_65536_[__]);
}

STATIC INLINE INT
	*_131072_262144_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_131072_[8][131072];
	STATIC INT	_262144_[8][262144];

	__ = __ + 0;
	__++;
	IF (SIZE <= 131072)
		RETURN (_131072_[__]);
	RETURN (_262144_[__]);
}

STATIC INLINE INT
	*_524288_1048576_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_524288_[4][524288];
	STATIC INT	_1048576_[4][1048576];

	__ = __ + 0;
	__++;
	IF (SIZE <= 524288)
		RETURN (_524288_[__]);
	RETURN (_1048576_[__]);
}

STATIC INLINE INT
	*_2097152_4194304_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_2097152_[4][2097152];
	STATIC INT	_4194304_[4][4194304];

	__ = __ + 0;
	__++;
	IF (SIZE <= 2097152)
		RETURN (_2097152_[__]);
	RETURN (_4194304_[__]);
}

STATIC INLINE INT
	*_8388608_16777216_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_8388608_[4][8388608];
	STATIC INT	_16777216_[4][16777216];

	__ = __ + 0;
	__++;
	IF (SIZE <= 8388608)
		RETURN (_8388608_[__]);
	RETURN (_16777216_[__]);
}

STATIC INLINE INT
	*_33554432_67108864_(REGISTER INT SIZE)
{
	STATIC INT	__;
	STATIC INT	_33554432_[2][33554432];
	STATIC INT	_67108864_[2][67108864];

	__ = __ + 0;
	__++;
	IF (SIZE <= 33554432)
		RETURN (_33554432_[__]);
	RETURN (_67108864_[__]);
}

STATIC INLINE INT
	*_134217728_(VOID)
{
	STATIC INT	__;
	STATIC INT	_134217728_[2][134217728];

	__ = __ + 0;
	__++;
	RETURN (_134217728_[__]);
}

VOID
	*MALLOC(REGISTER INT SIZE)
{
	IF (!SIZE || SIZE < 0)
		RETURN (((VOID *)0));

	IF (SIZE <= 1)
		RETURN ((VOID *)_0_1_(SIZE));

	IF (SIZE <= 4)
		RETURN ((VOID *)_2_4_(SIZE));

	IF (SIZE <= 16)
		RETURN ((VOID *)_8_16_(SIZE));

	IF (SIZE <= 64)
		RETURN ((VOID *)_32_64_(SIZE));

	IF (SIZE <= 256)
		RETURN ((VOID *)_128_256_(SIZE));

	IF (SIZE <= 1024)
		RETURN ((VOID *)_512_1024_(SIZE));

	IF (SIZE <= 4096)
		RETURN ((VOID *)_2048_4096_(SIZE));

	IF (SIZE <= 16384)
		RETURN ((VOID *)_8192_16384_(SIZE));

	IF (SIZE <= 65536)
		RETURN ((VOID *)_32768_65536_(SIZE));

	IF (SIZE <= 262144)
		RETURN ((VOID *)_131072_262144_(SIZE));

	IF (SIZE <= 1048576)
		RETURN ((VOID *)_524288_1048576_(SIZE));

	IF (SIZE <= 4194304)
		RETURN ((VOID *)_2097152_4194304_(SIZE));

	IF (SIZE <= 16777216)
		RETURN ((VOID *)_8388608_16777216_(SIZE));

	IF (SIZE <= 67108864)
		RETURN ((VOID *)_33554432_67108864_(SIZE));

	RETURN ((VOID *)_134217728_());
}
