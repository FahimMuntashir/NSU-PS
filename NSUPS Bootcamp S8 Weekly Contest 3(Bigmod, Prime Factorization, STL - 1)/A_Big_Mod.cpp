#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll bigMod(ll base, ll pow, ll mod)
{
    if (pow == 0)
    {
        return 1 % mod;
    }
    if (pow % 2 == 1)
    {
        ll a = base % mod;
        ll b = (bigMod(base, pow - 1, mod)) % mod;

        return (a * b) % mod;
    }
    else
    {
        ll a = (bigMod(base, pow / 2, mod)) % mod;

        return (a * a) % mod;
    }
}

int main()
{
    ll b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << bigMod(b, p, m) << endl;
    }
}