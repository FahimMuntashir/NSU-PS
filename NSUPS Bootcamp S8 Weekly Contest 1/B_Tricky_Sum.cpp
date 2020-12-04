#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll sum = (n * (n + 1)) / 2;
        for (int i = 0; pow(2, i) <= n; i++)
        {
            sum -= (2 * pow(2, i));
        }
        cout << sum << endl;
    }
}