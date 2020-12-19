#include<bits/stdc++.h>

using namespace std;
#define ll long long


int tZ(ll n)
{
    int count  = 0;

    for (int i = 5;n/i>=1; i*=5)
    {
        count+=n/i;
    }

    return count;
    
}

int main()
{   
    ll n;
    cin>>n;


}