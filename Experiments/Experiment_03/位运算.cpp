#define vc vector
#define pb push_back
#define ll long long
#define ull unsigned long long
using ld = long double;

#define eps 1e-6
#define INF 0x3f3f3f3f

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	ll i, j;
	
	int x;
	
	scanf("%x", &x);
	// printf("0x%x\n", x);

	ll y1 = 0xf0000000;
	ll y2 = 0xff0fffff;
	ll y3 = 0x00000fff;
	
	x |= y1;
	x &= y2;
	x ^= y3;
	
	printf("0x%x\n", x);
}

int main()
{
	ll i, j;
	
	solve();
	
	return 0;
}
