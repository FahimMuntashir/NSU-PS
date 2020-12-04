#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;
    int len = s.size();
    int count = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            count++;
    }
    if (count == 0 && len % 2 == 1)
        cout << "YES" << endl;
    else if (count == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}