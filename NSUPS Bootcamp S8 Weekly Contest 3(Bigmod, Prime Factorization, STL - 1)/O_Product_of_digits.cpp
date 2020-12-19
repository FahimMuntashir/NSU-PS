#include <bits/stdc++.h>

using namespace std;
#define ll long long

int arr[10];

int main()
{
    ll t;

    cin >> t;

    while (t--)

    {
        ll n;

        cin >> n;

        if (n == 1)
        {
            cout << n << endl;
            continue;
        }

        if (n == 0)
        {
            cout << 10 << endl;
            continue;
        }

        else

        {

            for (int i = 9; i >= 2; i--)

            {

                while (n % i == 0)
                {
                    n /= i;
                    arr[i]++;
                }
            }
        }

        if (n == 1)
        {

            for (int i = 2; i <= 9; i++)

                while (arr[i])
                {
                    cout << i;
                    arr[i]--;
                }

            cout << endl;
        }

        else
            cout << -1 << endl;
    }
}