#include <stdio.h>

int fetch_nth_bit(unsigned int x, int bits)
{
	return (x >> bits) & 0x1;
}

int unsigned_int_addo(unsigned int x, unsigned int y)
{
	int flag_01 = fetch_nth_bit(x, 31) & fetch_nth_bit(y, 31);
	
	unsigned int z = x + y;
	
	int flag_02 = (fetch_nth_bit(x, 31) | fetch_nth_bit(y, 31)) & (~fetch_nth_bit(z, 31));
	
	return flag_01 | flag_02;
}

int unsigned_int_subo(unsigned int x, unsigned int y)
{
	return x < y;
}

void solve()
{	
	unsigned int x, y;
	
	scanf("%u %u", &x, &y);
	/** Check input */
//	printf("%u %u\n", x, y);
	int ret_01 = unsigned_int_addo(x, y);
	int ret_02 = unsigned_int_subo(x, y);
	
	printf("uadd overflow=%d, usub overflow=%d\n", ret_01, ret_02);
}

int main()
{
	solve();
	
	return 0;
}
