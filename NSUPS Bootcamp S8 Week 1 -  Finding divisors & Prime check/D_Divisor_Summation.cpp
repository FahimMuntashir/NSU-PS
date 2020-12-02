#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    ll i;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 1;
        if (n < 2)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (i * i == n)
            {
                sum += i;
            }
            else if (n % i == 0)
            {
                sum += i+(n/i);
            }
        }
        cout << sum << endl;
    }
}