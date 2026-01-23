#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	
	int sign = (x >> 31) & 0x1;
//	printf("%d\n", sign);
	
	int mask = -sign;
//	printf("%x\n", mask);

	int ans = (x ^ mask) + (1 & sign);
	printf("%d\n", ans);
	
	return 0;
}
