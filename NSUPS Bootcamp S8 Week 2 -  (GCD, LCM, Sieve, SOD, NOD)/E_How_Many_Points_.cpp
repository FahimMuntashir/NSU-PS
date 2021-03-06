#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
#define endl "\n"

int gcd(int a, int b)

{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    fastio;
    int t;
    cin >> t;
    int count = 1;
    while (t--)
    {
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;

        int ans = gcd(abs(bx - ax), abs(by - ay)) + 1;
        cout << "Case " << count << ": " << ans << endl;
        count++;
    }
}