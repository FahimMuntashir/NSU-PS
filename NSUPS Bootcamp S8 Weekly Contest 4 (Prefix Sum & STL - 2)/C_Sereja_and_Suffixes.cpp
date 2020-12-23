#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    set<int> s;
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans[n + 5];
    for (ll i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        ans[i] = s.size();
    }

    while (m--)
    {
        ll que;
        cin >> que;

        cout << ans[que - 1] << endl;
    }
}