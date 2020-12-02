#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 1; i < n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i]) / 2;
        sort(arr + i, arr + n);
    }
    cout << arr[n - 1] << endl;
}