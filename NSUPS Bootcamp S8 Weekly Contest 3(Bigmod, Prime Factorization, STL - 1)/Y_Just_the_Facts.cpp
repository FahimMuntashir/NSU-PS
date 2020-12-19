#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
            while (ans % 10 == 0)
                ans = ans / 10;
            ans = ans % 100000;
        }
        // cout <<setprecision(5)<< n << " -> " << ans % 10 << endl;
        printf("%5d -> %d\n", n, ans%10);
    }
}
