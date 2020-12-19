#include <bits/stdc++.h>
#define ll long long

#define PI 3.1416
using namespace std;

int main()
{
    int t;
    int count = 1;
    cin >> t;
    while (t--)
    {
        int n, base;
        double ans;
        scanf("%d %d", &n, &base);
        ans = n * log(n) - n + 0.5 * log(2 * PI * n);
        ans = ans / log(base);
        ll ok = ceil(ans);
        if (n == 0)
            ok = 1;
        cout << "Case " << count << ": " << ok << endl;
        count++;
    }
}
