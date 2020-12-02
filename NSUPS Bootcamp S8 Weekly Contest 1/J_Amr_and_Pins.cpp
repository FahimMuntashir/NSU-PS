#include <bits/stdc++.h>

using namespace std;

int main()
{
    double r, x, y, x_prime, y_prime;

    cin >> r >> x >> y >> x_prime >> y_prime;

    double distance = sqrt((x - x_prime) * (x - x_prime) + (y - y_prime) * (y - y_prime));
    double ans = ceil(distance / (2 * r));

    cout << ans << endl;
}