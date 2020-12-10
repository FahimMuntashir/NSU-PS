#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll num = 131071;

    string str;

    while (cin >> str)
    {
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '#')
            {
                if (count == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                count = ((str[i] - '0') + (count << 1)) % num;
            }
        }
    }
}