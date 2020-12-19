#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[1000];
vector<ll> vec;
int main(void)
{

    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            vec.push_back(i);
            if ((n / i) != i)
                vec.push_back(n / i);
        }
    }
    sort(vec.begin(), vec.end());
    if (k > vec.size())
        cout << -1;
    else
        cout << vec[k - 1];
}
