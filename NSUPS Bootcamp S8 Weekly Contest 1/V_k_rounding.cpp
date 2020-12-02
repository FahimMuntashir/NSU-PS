#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b);

int main()
{
    ll n, k;
    ll m = 1;
    cin >> n >> k;

    while (k--)
        m *= 10;
    int res = gcd(n, m);

    cout << n * m / res << endl;
}

ll gcd(ll a, ll b)
{
    ll rem;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}