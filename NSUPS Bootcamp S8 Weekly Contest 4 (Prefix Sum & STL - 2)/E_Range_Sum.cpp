#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"

int arr[20005];
ll sum[20005];

void genPreSum(ll n)
{
    sum[0] = arr[0];
    for (ll i = 0; i < n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }
}

ll getSum(ll l, ll r, ll n)
{
    ll s;
    if (r < n)
    {
        s = sum[n - l] - sum[n - (r + 1)];
    }
    else
    {
        s = sum[n - l];
    }
    return s;
}

int main()
{
    ll n;
    cin >> n;

    for (ll i = n - 1; i >= 0; i--)
    {
        cin >> arr[i];
    }
    genPreSum(n);

    ll que;
    cin >> que;

    while (que--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = getSum(l, r, n);
            cout << ans << endl;
        }
        else if (type == 2)
        {
            ll x;
            cin >> x;
            arr[n] = x;
            sum[n] = x + sum[n - 1];
            n++;
        }
    }
}