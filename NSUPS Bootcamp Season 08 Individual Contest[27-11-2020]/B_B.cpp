#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int res=0;
    int count = 1;
    while (count < b)
    {
        count += (a - 1);
        res++;
    }

    cout << res;
}