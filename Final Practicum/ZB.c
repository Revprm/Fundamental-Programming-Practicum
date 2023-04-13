#include <stdio.h>

long long gcdset(long long u, long long v)
{
    if (v == 0) return u;
    return gcdset(v, u % v);
}

long long modp(long long a, long long b, long long mod)
{
    if (b == 0) return 1;
    
    long long x = modp(a, b / 2, mod);
    x = (x * x) % mod;
    if (b & 1) x = (a * x) % mod;
    
    return x;
}
int main()
{
    long long n, r;
    long long res = 0;
    long long hu = 1000000007;
    scanf("%lld %lld", &n, &r);
    for (int i = 0; i < n; ++i)
    {
        res = (res + modp(r, gcdset(i, n), hu)) % hu;
    }
    res = (res * modp(n, hu - 2, hu)) % hu;
    printf("%lld\n", res);

    return 0;
}