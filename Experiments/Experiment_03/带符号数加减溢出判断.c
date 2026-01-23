#include <stdio.h>

int fetch_nth_bit(int x, int bits)
{
	return (x >> bits) & 0x1;
}

int int_addo(int x, int y)
{
	int f1 = fetch_nth_bit(x, 31) ^ fetch_nth_bit(y, 31);
	
	int z = x + y;
	
	int f2 = fetch_nth_bit(x, 31) ^ fetch_nth_bit(z, 31);
	
	return (!f1) && f2;
}

int int_subo(int x, int y)
{
	int f1 = fetch_nth_bit(x, 31) ^ fetch_nth_bit(y, 31);
	
	int z = x - y;
	
	int f2 = fetch_nth_bit(x, 31) ^ fetch_nth_bit(z, 31);
	
	return f1 && f2;
}

void solve()
{	
	int x, y;
	
	scanf("%d %d", &x, &y);
	/** Check input */
//	printf("%d %d\n", x, y);
	int ret_01 = int_addo(x, y);
	int ret_02 = int_subo(x, y);
	
	printf("tadd overflow=%d, tsub overflow=%d\n", ret_01, ret_02);
}

int main()
{
	solve();
	
	return 0;
}
