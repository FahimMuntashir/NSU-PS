#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl "\n"
using namespace std;

queue<int> que;
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cin >> n;
            que.push(n);
        }
        else if (n == 2)
        {
            if (que.empty() == 0)
            {
                que.pop();
            }
        }
        else
        {
            if (que.empty() == 1)
            {
                cout << "Empty!" << endl;
            }
            else
                cout << que.front() << endl;
        }
    }
}