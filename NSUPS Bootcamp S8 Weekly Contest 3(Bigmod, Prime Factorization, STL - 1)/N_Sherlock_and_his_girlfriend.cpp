#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)

int isPrime(int x)
{
    if (x == 1)
        return 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        if (n == 1)
            cout << 1 << endl
                 << 1 << endl;
        else if (n == 2)
        {
            cout << 1 << endl
                 << 1 << ' ' << 1 << endl;
            continue;
        }
        else
        {
            cout << 2 << endl;
            for (int i = 2; i <= n + 1; i++)
            {
                if (isPrime(i) == 1)
                    cout << 1 << ' ';
                else
                    cout << 2 << ' ';
            }
            cout << endl;
        }
    }
}
