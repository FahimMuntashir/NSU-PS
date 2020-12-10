#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans;
ll n;
void modify(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % (i * i) == 0)
        {
            return;
        }
    }
    ans = max(ans, n);
}

int main()
{
    ll n;
    cin >> n;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll f = i;
            modify(f);
            ll d = n / i;
            modify(d);
        }
    }

    cout << ans << endl;
}