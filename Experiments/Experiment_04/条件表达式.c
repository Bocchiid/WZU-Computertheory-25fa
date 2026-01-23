#include <stdio.h>

int main()
{
	int x, y, z;
	
	scanf("%d %d %d", &x, &y, &z);
	
	int flag = !!x;
//	printf("%d\n", flag);
	
	int mask = -flag;
//	printf("%x\n", mask);
	
	int ans = (y & mask) | (z & (~mask));
	printf("%d\n", ans);
	
	return 0;
}
