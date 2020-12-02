#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll n;
    while (cin >> n)
    {
        if (n<0)
        {
            cout<<0<<endl;
            continue;
        }
        

        ll sum = 0;

        for (int i = 1; i * i <= n; i++)
        {
            if (i * i == n)
            {
                sum += i;
            }
            else if (n % i == 0)
            {
                sum += i + (n / i);
            }
        }

        if (sum <= 0)
        {
            cout << 0 << endl;
        }
        else if (sum > 0)
        {
            cout << sum - n << endl;
        }
    }
}