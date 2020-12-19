#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl "\n"
using namespace std;

#define ll long long

int main()
{
    fastio;
    ll n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int count = 0;
        while (n % 2 == 0)
        {
            count++;
            n /= 2;
        }
        if (count > 0)
        {
            cout << "2"
                 << "^" << count << " ";
        }
        int x = 3;
        while (x * x <= n)
        {
            count = 0;
            while (n % x == 0)
            {
                count++;
                n /= x;
            }
            if (count > 0)
                cout << x << "^" << count << " ";
            x += 2;
        }
        if (n != 1)
            cout << n << "^" << 1 << endl;
        else
            cout << endl;
    }
}