#include <stdio.h>

void solve()
{	
	short x;
	
	scanf("%hd", &x);
	/** Check input of short */
//	printf("%d", x);
	/** 1. Int */
	int i = (int)x;
	printf("int: %08X, %d\n", i, i);
	/** 2. Unsigned int */
	unsigned int ui = (unsigned int)x;
	printf("unsigned int: %08X, %u\n", ui, ui);
	/** 3. Short */
	short s = (short)x;
	s &= 0xffff;
	printf("short: %04X, %d\n", (unsigned short)s, s);
	/** 4. Unsigned short */
	unsigned short us = (unsigned short)x;
	us &= 0xffff;
	printf("unsigned short: %04X, %u\n", (unsigned short)us, us);
	/** 5. Char */
	char c = (char)x;
	c &= 0xff;
	printf("char: %02X, %d\n", (unsigned char)c, c);
	/** 6. Unsigned char */
	unsigned char uc = (unsigned char)x;
	uc &= 0xff;
	printf("unsigned char: %02X, %u\n", (unsigned char)uc, uc);
}

int main()
{
	solve();
	
	return 0;
}
