#include <bits/stdc++.h>

using namespace std;
map<string, int> m;

int main()

{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        string str;
        cin >> str;
        if (m[str] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        m[str] = 1;
    }
}