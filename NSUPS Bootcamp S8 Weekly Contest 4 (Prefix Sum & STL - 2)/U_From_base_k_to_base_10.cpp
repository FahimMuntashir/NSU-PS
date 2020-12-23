#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()

{
    vector<int> vec;
    int n, k;
    cin >> n >> k;

    while (n > 0)
    {
        int rem = n % k;
        vec.push_back(rem);
        n /= k;
    }
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}