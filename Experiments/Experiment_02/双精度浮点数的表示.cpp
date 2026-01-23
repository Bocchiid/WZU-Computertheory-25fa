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
    double f;

    cin >> f;

    unsigned long long n = *((unsigned long long *)(&f));
    printf("Bit representation=0x%016llX\n", n);

    unsigned long long S = (n >> 63) & 0x1;
    unsigned long long E = (n >> 52) & 0x7ff;
    unsigned long long M = n & 0xfffffffffffff;
    printf("Sign=%d, exponent=0x%03llX, fraction=0x%013llX\n", S, E, M);

    char MBinary[53];

    for (i = 51; i >= 0; i--)
        MBinary[51 - i] = ((M >> i) & 0x1) + '0';

    MBinary[52] = '\0';

    printf("Normalized representation=%c%c.%s*2^(%d)",
           n >> 63 ? '-' : '+', (E == 0) ? '0' : '1', MBinary, (E == 0) ? -1022 : (long long)(E - 1023));
}

int main()
{
    ll i, j;

    solve();

    return 0;
}
