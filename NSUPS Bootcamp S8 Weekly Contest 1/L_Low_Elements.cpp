#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int per;
    int maxLeft = n + 1;

    int count = 0;
    for (int i = 0; i <n; i++)
    {
        cin >> per;
        maxLeft = min(maxLeft, per);
        if (per <= maxLeft)
        {
            count++;
        }
    }

    cout << count << endl;
}