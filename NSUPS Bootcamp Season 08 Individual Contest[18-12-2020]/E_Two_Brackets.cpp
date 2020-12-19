#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.size();

        int count = 0;
        int n1 = 0, n2 = 0;

        for (int i = 0; i < len; i++)
        {
            if (str[i] == '(')
            {
                n1++;
            }
            if (str[i] == '[')
            {
                n2++;
            }
            if (str[i] == ')')
            {
                if (n1 > 0)
                {
                    count++;
                    n1--;
                }
            }
            if (str[i] == ']')
            {
                if (n2 > 0)
                {
                    count++;
                    n2--;
                }
            }
        }
        cout << count << endl;
    }
}