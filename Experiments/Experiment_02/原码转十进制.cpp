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
	ll n;
	
	string s;
	
	cin >> n;
	cin >> s;
	
	ll ans = 0;
	
	for (i = 1; i < n; i++)
		ans = ans * 2 + (s[i] - '0');
		
	if (s[0] == '1')
		ans = -ans;
		
	cout << ans << endl;
} 

int main()
{ 
	ll i, j;

	solve();

	return 0;
}
