#include <stdio.h>

void solve()
{	
	int x, k;
	
	scanf("%d %d", &x, &k);
	
	int result;
	
	if (x >= 0)
	{
		result = x >> k;
	}
	else
	{
		x += (1 << k) - 1;
		result = x >> k;
	}
	
	printf("%d\n", result);
}

int main()
{
	solve();
	
	return 0;
}
