#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

bool isPrime[N];

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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (isPrime[i])
        {
            cout<<i<<" ";
        }
        
    }
    cout << endl;
}