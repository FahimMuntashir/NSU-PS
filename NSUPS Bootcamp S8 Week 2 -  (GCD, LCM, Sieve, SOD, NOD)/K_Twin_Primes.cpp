#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 20000000;
bool prime[N];
int twinP[N];
void sieve()
{
    for (int i = 0; i < N; i++)
    {
        prime[i] = true;
    }

    prime[0] = prime[1] = false;

    for (int i = 2; i < N; i++)
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


void twin()
{
    int count=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2])
        {
            twinP[count++] = i;
        }
    }
}


int main()

{
    sieve();
    twin();
    // for (int i = 0; i <N; i++)
    // {
    //     if (prime[i]&& prime[i+1])
    //     {
            
    //     }
        
    // }
    int n;
    while (cin>>n)
    {
        cout<<"("<<twinP[n]<<", "<<twinP[n]+2<<")"<<endl;
        
    }
    
}