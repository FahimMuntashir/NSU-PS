#include <bits/stdc++.h>
// #define int long long
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
    int n;
    cin >> n;

    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ans = gcdMany(s, n);
    cout << ans << endl; 
}