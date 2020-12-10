#include <bits/stdc++.h>

using namespace std;
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
    int n;
    cin >> n;

    if (isPrime[n] == true)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "not a prime number" << endl;
    }

    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {

    //     if (isPrime[i]==true)
    //     {
    //         cout<<i<<" ";
    //         count++;
    //     }

    // }
    // cout<<endl;
    // cout<<count<<endl;
}