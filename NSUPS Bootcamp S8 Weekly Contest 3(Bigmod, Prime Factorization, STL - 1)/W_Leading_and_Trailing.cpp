#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll power(ll base, ll exp)
{

    if (exp == 0)
    {
        return 1;
    }

    if (exp % 2 == 0)
    {
        ll half = power(base, exp / 2);

        return half * half;
    }
    else
    {
        return power(base, exp - 1) * base;
    }
}



int main()
{
    int t;
    cin >> t;
    ll n,k;
    while (t--)
    {
        cin>>n>>k;
        ll ans = power(n,k);
        int last= ans %1000;
        cout<<setprecision(6)<<ans;
        // printf("%3lld", ans);
        // cout<<"..."<<last<<endl;
        printf("%03lld...%d\n", ans, last);
    }
}