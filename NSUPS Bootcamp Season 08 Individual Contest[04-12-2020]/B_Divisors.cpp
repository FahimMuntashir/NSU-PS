#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, u;
        cin >> l >> u;
        double temp, count;
        int num = 0, num2 = 0;

        for (int i = l; i <= u; i++)
        {
            temp = pow(i, 0.5);
            count = 0;
            for (int j = 1; j <= temp; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    if (j < temp)
                        count++;
                }
            }
            if (count > num2)
            {
                num2 = (int)count;
                num = i;
            }
        }
        cout << "beetween " << l << " and " << u << ", " << num << " has a maximum of " << num2 << " divisors." << endl;
    }
    return 0;
}