#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, y = 0;
    string s;
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'o')
            x++;
        else
            y++;
    }
    if (x == 0 || y == 0)
        cout << "YES" << endl;
    else
    {
        if (x > y)
            cout << "NO" << endl;
        else if (y % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}