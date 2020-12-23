#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll N = 200005;

int main()
{

    ll n, k, q;
    cin >> n >> k >> q;
    ll fre[N];
    ll check[N];
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        fre[l]++;
        fre[r + 1]--;
    }
    for (ll i = 1; i < N; i++)
    {
        fre[i] = fre[i] + fre[i - 1];
    }

    for (ll i = 1; i < N; i++)
    {
        if (fre[i] >= k)
        {
            check[i] = 1;
        }
        else
        {
            check[i] = 0;
        }
    }

    for (ll i = 1; i < N; i++)
    {
        check[i] = check[i] + check[i - 1];
    }

    for (ll i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;
        cout << check[b] - check[a - 1] << endl;
    }
}