#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }
    if (count <= size / 2)
    {
        while (count <= size / 2)
        {
            size--;
        }
    }

    cout << size << endl;
}