#include <bits/stdc++.h>

using namespace std;

int mod(int a, int b)
{
    int x;
    x = a % b;
    if (x < 0)
    {
        x += b;
    }
    return x;
}

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}

int gcdMany(int arr[], int n)
{
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = GCD(res, arr[i]);
    }

    return res;
}

int sum(int n)
{
    int sum = 0, rem, y;
    while (n)
    {
        rem = n % 10;

        if (rem != 0)
        {
            sum += rem;
        }
        n = n / 10;
    }
    return sum;
}

const int MAXX = 1e5;

int sod[MAXX];
void SOD(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; i++)
        {
            sod[j] += i;
        }
    }
}

int main()
{
    // int n;
    // cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int ans = gcdMany(arr, n);

    // cout << ans << endl;

    int n;
    cin >> n;
    SOD(n);
    cout<<n<<endl;
}