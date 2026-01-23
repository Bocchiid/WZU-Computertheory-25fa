#define vc vector
#define pb push_back
#define ll long long 
#define ull unsigned long long
using ld = long double;

#define eps 1e-6
#define INF 0x3f3f3f3f

#include <bits/stdc++.h>
using namespace std;

ll toNum(char c)
{
	ll ret;
	
	if (isdigit(c))
		ret = c - '0';
	else
		ret = c - 'A' + 10;
		
	return ret;
}

void solve()
{
	ll i, j;
	string end;
	string s;
	
	cin >> end;
	cin >> s;
	
	ll ans = 0;
	
	if (end == "big")
	{
		for (i = 0; i < 8; i += 2)
		{
			for (j = 0; j < 2; j++)
            {
                ll num = toNum(s[i + j]);
			          ans = ans * 16 + num;
            }
		}
	}
	else
	{
		for (i = 6; i >= 0; i -= 2)
		{
			for (j = 0; j < 2; j++)
			{
				ll num = toNum(s[i + j]);
				ans = ans * 16 + num;
			}
		}
	}
	
	cout << ans << endl;
} 

int main()
{ 
	ll i, j;

	solve();

	return 0;
}
