#include <stdio.h>

void solve()
{	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (!a || !b)
	{
		printf("0\n");
		
		return;
	}
	
	long long result = 0, x;
	
	if (b < 0)
	{
		x = -(long long)a;
		b = -b;
	}
	else
		x = a;
	
	while (b)
	{
		if (b & 0x1)
			result += x;
			
		x <<= 1;
		b >>= 1;
	}
	
	printf("%lld\n", result);
}

int main()
{
	solve();
	
	return 0;
}
