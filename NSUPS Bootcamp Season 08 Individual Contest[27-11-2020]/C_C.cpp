#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double v;
        cin>>v;
        sum+=1/v;
    }

   
    
    double  ans = 1/ sum;

    cout<< ans;
}