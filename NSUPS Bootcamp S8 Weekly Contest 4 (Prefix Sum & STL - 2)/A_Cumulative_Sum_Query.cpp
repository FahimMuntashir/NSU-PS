#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
#define ll long long

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll preSum[n + 5] ;

    preSum[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    ll query;
    cin >> query;

    for (ll i = 1; i <= query; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l > 0)
            cout << preSum[r] - preSum[l - 1] << endl;
        else
        {
            cout << preSum[r]<<endl;
        }
    }
}


