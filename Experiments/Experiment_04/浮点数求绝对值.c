#include <stdio.h>

int main()
{
	int f;
	
	scanf("%x", &f);
	
	int E = (f >> 23) & 0xff;
	int M = f & 0x7fffff;
//	printf("%x %x\n", E, M);
	
	int flag_01 = !(E ^ 0xff);
	int flag_02 = !!M;
//	printf("%d %d\n", flag_01, flag_02);

	int is_nan = flag_01 & flag_02;
//	printf("%d\n", is_nan);

	int mask = ((~is_nan) + 1) | 0x7fffffff;
//	printf("%x\n", mask);
	
	int ans = f & mask;
	printf("%x\n", ans);
	
	return 0;
}
