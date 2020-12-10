
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    int count = 1;
    while (t--)
    {
        ll a, b, c, L;
        cin >> a >> b >> L;
        cout << "Case " << count << ": ";
        c = a * b / (gcd(a, b));
        if (L % c)
            cout << "impossible\n";
        else
        {
            ll d = L / c;
            while (gcd(d, c) != 1)
            {
                ll m = gcd(c, d);
                c /= m;
                d *= m;
            }
            cout << d << endl;
        }
        count++;
    }
}