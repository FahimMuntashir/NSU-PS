#include <bits/stdc++.h>

using namespace std;

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

    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int g = gcd(n1, n2);

        int l = (n1 * n2) / g;

        if (l % g)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << g << " " << l << endl;
        }
    }
}