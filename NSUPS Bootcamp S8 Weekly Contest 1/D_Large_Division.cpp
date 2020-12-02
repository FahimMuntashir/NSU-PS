#include<bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    int t;
    cin>>t;
    
    for (int i = 1; i <= t; i++)
    {
        ll a,b;
        cin>>a>>b;
        if (a%b==0)
        {
            cout<<"Case "<<i<<": divisible"<<endl;
        }else
        {
            cout<<"Case "<<i<<": not divisible"<<endl;
        }
        
        
    }
    
       
}