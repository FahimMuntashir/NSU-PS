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
        ll sum = 0;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    if (i == n / i)
                    {
                        sum += i;
                    }
                    else
                    {
                        sum += i + n / i;
                    }
                }
            }
            sum++;

            cout << sum << endl;
        }
    }
}