#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll powerFun(ll base, ll pow)
{
    if (pow == 0)
    {
        return 1;
    }
    if (pow % 2 == 0)
    {
        ll half = powerFun(base, pow / 2);
        return (half * half) % 10;
    }
    else
    {
        return (powerFun(base, pow - 1) * base) % 10;
    }
}

int main()
{
    int t;
    cin >> t;
    ll a, b;

    while (t--)
    {
        cin >> a >> b;
        ll ans = powerFun(a, b);

        cout << ans % 10 << endl;
    }
}