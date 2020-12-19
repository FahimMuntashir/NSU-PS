#include <bits/stdc++.h>

using namespace std;
#define ll long long

const ll N = 1e5;

ll arr[N + 5];

int main()
{
    ll n;
    cin>>n;
    ll pok[n];
    ll maxx=1;

    for (ll i = 0; i < n; i++)
    {
        cin>>pok[i];
        arr[pok[i]]++;
    }

    for (ll  i =2; i <= N; i++)
    {
        ll count = 0;
        for (ll j = i; j <= N; j+=i)
        {
            count+=arr[j];
        }

        maxx  =max(maxx, count);
    }
    cout<<maxx<<endl;
    
}