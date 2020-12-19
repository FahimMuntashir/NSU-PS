#include <bits/stdc++.h>
#define ll long long
const ll N = 100000;

using namespace std;

bool prime[N];
void sieve()
{
    for (ll i = 0; i < N; i++)
    {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    ll k;
    ll n;

    cin >> n;

    sieve();

    ll count = 0, ncount = 0;
    for (ll i = 2; i <= n + 1; i++)
    {
        if (prime[i])
            count++;
        else
            ncount++;
    }

    if (ncount == 0)
        cout << "1" << endl;

    else
        cout << "2" << endl;

    for (ll i = 2; i <= n + 1; i++)
    {
        if (prime[i])
            cout << "1 ";
        else
            cout << "2 ";
    }
}