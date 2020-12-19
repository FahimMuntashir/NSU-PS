#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl "\n"
using namespace std;
#define ll long long
int main()
{
    fastio;
    int t;
    cin >> t;

    stack<int> s;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cin >> n;
            s.push(n);
        }
        else if (n == 2)
        {
            if (s.empty() == 0)
            {
                s.pop();
            }
        }
        else
        {
            if (s.empty() == 1)
            {
                cout << "Empty!" << endl;
            }
            else
                cout << s.top() << endl;
        }
    }
}