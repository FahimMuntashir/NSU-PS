#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
        }
        while (arr[i] % 3 == 0)
        {
            arr[i] /= 3;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
}