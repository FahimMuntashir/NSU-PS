#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll mod = n % x;

        if (mod - y >= 0)
        {
            n = n - (mod - y);
        }
        else
        {
            n = n - mod - x + y;
        }
        cout << n << endl;
    }
}