#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int n;

    while (cin >> n)
    {
        int g = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                g += gcd(i, j);
            }
        }
        if (g > 0)
        {
            cout << g << endl;
        }
    }
}