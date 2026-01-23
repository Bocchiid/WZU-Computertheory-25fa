#include <stdio.h>

int main()
{
	int x, y;
	
	scanf("%x %x", &x, &y);
	
	int sum = x + y;
	
	int x_sign = (x >> 31) & 0x1;
	int y_sign = (y >> 31) & 0x1;
	int s_sign = (sum >> 31) & 0x1;
//	printf("%d %d %d\n", x_sign, y_sign, s_sign);
	
	int flag_01 = !(x_sign ^ y_sign);
	int flag_02 = x_sign ^ s_sign;
//	printf("%d %d\n", flag_01, flag_02);
	
	int ans = !(flag_01 & flag_02);
	printf("%d\n", ans);
	
	return 0;
}
