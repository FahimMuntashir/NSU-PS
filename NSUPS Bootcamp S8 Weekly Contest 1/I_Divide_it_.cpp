#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll t;
    cin >> t;
    ll count;

    while (t--)
    {
        ll n;
        cin >> n;

        ll count = 0;

        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                n = (2 * n) / 3;
            }
            else if (n % 5 == 0)
            {
                n = (4 * n) / 5;
            }
            else
            {
                count = -1;
                break;
            }
            count++;
        }

        cout << count << endl;
    }
}