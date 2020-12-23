#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n + 5];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i > 0)
        {
            count += abs(arr[i] - arr[i - 1]);
        }
        else
        {
            count += abs(arr[i]);
        }
    }

    cout << count << endl;
}