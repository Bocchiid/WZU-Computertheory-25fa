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
	ll n, bits;

	cin >> n >> bits; 
	
	ll lower, upper;

	if (bits == 64)
	{
		lower = LLONG_MIN;
		upper = LLONG_MAX;	
	}
	else
	{
		lower = (-1) * (1 << (bits - 1));
		upper = (1 << (bits - 1)) - 1;
	}

	if (n >= lower && n <= upper)
	{
		for (i = 0; i < bits; i++)
		{
			ll bit = (n >> (bits - i - 1)) & 1;
			cout << bit;
		}

		cout << endl;
	}
	else
		cout << -1 << endl;
	}

int main()
{ 
	ll i, j;

	solve();

	return 0;
}
