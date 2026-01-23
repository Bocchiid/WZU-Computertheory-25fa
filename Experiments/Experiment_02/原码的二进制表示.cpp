#define vc vector
#define pb push_back
#define ll long long 
#define ull unsigned long long
using ld = long double;

#define eps 1e-6
#define INF 0x3f3f3f3f

#include <bits/stdc++.h>
using namespace std;

/* Return the sign of number n */
char comfirmSign(ll &n)
{
	char sign;
	
	if (n < 0)
	{
		n = -n;
		sign = '-';
	}
	else
		sign = '+';
  
	return sign;
}
/* Return the binary type of number n */
vc<ll> binary(ll n)
{
	vc<ll> ans;
	
	do
	{
		ll r = n % 2;
		n /= 2;
		ans.pb(r);
	} while (n);
	
	reverse(ans.begin(), ans.end());
	
	return ans;
}

void solve()
{
	ll i, j;
	ll n, bits;
	
	cin >> n >> bits;
	vc<ll> ans;
	
	char sign;
	sign = comfirmSign(n);
	
	ans = binary(n);
	
	if (ans.size() >= bits)
		cout << -1 << endl;
	else
	{
		vc<ll> trueAns;
		
		if (sign == '-')
			trueAns.pb(1);
		else
			trueAns.pb(0);
			
		for (i = 0; i < bits - ans.size() - 1; i++)
			trueAns.pb(0);
			
		for (auto &ele : ans)
			trueAns.pb(ele);
			
		for (auto &ele : trueAns)
			cout << ele;
			
		cout << endl;
	}
}

int main()
{
	ll i, j;
	
	solve();
	
	return 0;
}
