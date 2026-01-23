#include <stdio.h>
#include <stdint.h>

int main()
{
	long long n, i, sum=0;

  	if(scanf("%lld", &n)!=1){
		return 0;
	}

    for(i=0; i<=n-1; i++)
		sum += i;

  	printf("%lld\n", sum);

    return 0;
}
