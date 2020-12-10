#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int gcdMany(int arr[], int n)
{
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = gcd(res, arr[i]);
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
           int n;
           cin>>n;
           int ans = max(ans,gcdMany);

    }
}