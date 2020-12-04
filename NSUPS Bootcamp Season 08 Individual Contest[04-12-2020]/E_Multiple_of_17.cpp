#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s[0] == '0' && s[1] == '\0')
            break;
        int temp = 0, i;
        for (i = 0; s[i]; i++)
        {
            temp = temp * 10 + s[i] - '0';
            temp %= 17;
        }
        int ans = temp == 0;
        cout << ans << endl;
    }
}