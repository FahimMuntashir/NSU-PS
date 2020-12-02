#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string digit, lock;
    cin >> digit >> lock;

    int combination = 0;
    for (int i = 0; i < n; i++)
    {
        combination += min(abs(digit[i] - lock[i]), 10 - abs(digit[i] - lock[i]));
    }

    cout << combination << endl;
}