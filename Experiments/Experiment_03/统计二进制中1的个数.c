#include <stdio.h>

void solve()
{	
	int n;
	
	scanf("%d", &n);
	
	int count = 0;
	
	while (n)
	{
		int r = n & 0x1;
		count += r;
		n >>= 1;
	}
	
	printf("%d\n", count);
}

int main()
{
	solve();
	
	return 0;
}
