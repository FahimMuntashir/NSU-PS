#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;

    getline(cin, str);
    while (t--)
    {
        getline(cin, str);
        int len = str.size();
        stack<char> st;
        for (int i = 0; i < len; i++)
        {
            if (!st.empty() && str[i] == ')' && st.top() == '(')
                st.pop();
            else if (!st.empty() && str[i] == ']' && st.top() == '[')
                st.pop();
            else
                st.push(str[i]);
        }
        if (st.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}