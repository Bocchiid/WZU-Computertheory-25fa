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
    float f;

    cin >> f;

    unsigned int n = *((unsigned int *)(&f));
    printf("Bit representation=0x%08X\n", n);

    unsigned int S = (n >> 31) & 0x1;
    unsigned int E = (n >> 23) & 0xff;
    unsigned int M = n & 0x7fffff;
    printf("Sign=%d, exponent=0x%02X, fraction=0x%06X\n", S, E, M);

    char MBinary[24];

    for (i = 22; i >= 0; i--)
        MBinary[22 - i] = ((M >> i) & 0x1) + '0';

    MBinary[23] = '\0';

    printf("Normalized representation=%c%c.%s*2^(%d)",
           n >> 31 ? '-' : '+', (E == 0) ? '0' : '1', MBinary, (E == 0) ? -126 : (int)(E - 127));
}

int main()
{
    ll i, j;

    solve();

    return 0;
}
