#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, z;
    cin >> n >> m >> z;

    ll count = 0;
    for (int i = 1; i <= z; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            count++;
        }
    }

    cout << count << endl;
}