#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 1e7;

bool isPrime[N + 5];

void sieve()
{
    for (int i = 0; i < N; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{

    sieve();
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sq = sqrt(n);

        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else if (sq * sq == n && isPrime[sq] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}