#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> vis;

    int t;
    cin >> t;
    int count = 0;

    while (t--)
    {
        string str;
        cin >> str;
        
        if (vis[str] == 0)
        {
            cout << "OK" << endl;
        }
    
        else
        {
            cout << str << vis[str] << endl;
        }
        vis[str]++;
    }
}