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
    int N, a[100];
    string s;

    while (cin >> t)
    {
        int count;
        getchar();
        while (t--)
        {

            N = 0;
            count = 0;

            getline(cin, s);
            istringstream is(s);

            while (is >> a[N])
            {
                ++N;
            }

            for (int i = 0; i < N; ++i)
                for (int j = i + 1; j < N; ++j)
                    count = max(count, gcd(a[i], a[j]));

            cout << count << endl;
        }
    }