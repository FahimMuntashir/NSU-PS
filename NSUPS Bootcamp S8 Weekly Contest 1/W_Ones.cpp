#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int a = 1, b=1;
        while (b % n != 0)
        {
            b = (b * 10) + 1;
            b %=  n;
            a++;
        }
        cout<<a<<endl;
    }
}