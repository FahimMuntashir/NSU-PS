#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n);
ll reverse(ll n);

int main()
{
    ll n;
    // cin >> n;

    while (cin >> n)
        if (isPrime(n) && isPrime(reverse(n)) && reverse(n) != n)
        {
            cout << n << " is emirp." << endl;
        }
        else if (isPrime(n))
        {
            cout << n << " is prime." << endl;
        }
        else
        {
            cout << n << " is not prime." << endl;
        }
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

ll reverse(ll n)
{
    ll rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}