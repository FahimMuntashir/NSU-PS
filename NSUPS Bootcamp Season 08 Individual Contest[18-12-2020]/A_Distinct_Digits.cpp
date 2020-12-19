#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll a,b;
    cin>>a>>b;

    for (ll  i =a; i <= b; i++)
    {
        int count = 0;
        int x= i;
        set<int> s;
        while (x!=0)
        {
            count++;
            s.insert(x%10);
            x/=10;
        }
        if(s.size()==count)
        {
            cout<<i<<endl;
            return 0;
        }
        
    }
    cout<<-1<<endl;
}