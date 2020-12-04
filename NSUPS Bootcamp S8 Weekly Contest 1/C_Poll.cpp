    #include <bits/stdc++.h>

    using namespace std;

    #define ll long long
    map<string, ll> m;
    int main()
    {

        ll n;
        cin >> n;
        ll a, b, count = 0;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            m[s[i]]++;
            count = max(count, m[s[i]]);
        }

        for (auto &i : m)
        {
            if (i.second == count)
                cout << i.first << endl;
        }
    }
