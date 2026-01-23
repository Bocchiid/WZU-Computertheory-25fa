#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	char arr[101];
	
	scanf("%s", arr);
	
	n = strtoll(arr, NULL, 0);
//	printf("%d\n", n);

	if (n < 0 || n > 0xffff)
	{
		printf("-1\n");
		
		return 0;
	}

	short s = (short)n;
	unsigned short us = (unsigned short)n;
	
	printf("Hex=%X, Signed=%d, Unsigned=%u\n", n, s, us);
	
	return 0;
}
