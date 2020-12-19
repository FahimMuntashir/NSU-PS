#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string temp = str;
    int count = 0;
    reverse(temp.begin(), temp.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != temp[i])
            count++;
    }
    if (count == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}