#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    int acnt2 = 0, acnt3 = 0, acnt5 = 0;
    int bcnt2 = 0, bcnt3 = 0, bcnt5 = 0;

    while (a % 2 == 0)
    {
        acnt2++;
        a /= 2;
    }
    while (a % 3 == 0)
    {
        acnt3++;
        a /= 3;
    }
    while (a % 5 == 0)
    {
        acnt5++;
        a /= 5;
    }

    while (b % 2 == 0)
    {
        bcnt2++;
        b /= 2;
    }
    while (b % 3 == 0)
    {
        bcnt3++;
        b /= 3;
    }
    while (b % 5 == 0)
    {
        bcnt5++;
        b /= 5;
    }

    int res = abs(acnt2 - bcnt2) + abs(acnt3 - bcnt3) + abs(acnt5 - bcnt5);

    if (a == b)
    {
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}