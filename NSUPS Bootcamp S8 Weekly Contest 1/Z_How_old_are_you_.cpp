#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        int cd, cm, cy, bd, bm, by;

        char ch;

        cin >> cd >> ch >> cm >> ch >> cy;
        cin >> bd >> ch >> bm >> ch >> by;

        int age = cy - by;
        if (bm > cm)
        {
            age--;
        }
        if (bm == cm && bd > cd)
        {
            age--;
        }

        if (age < 0)
        {
            cout << "Case #" << ++count << ": Invalid birth date" << endl;
        }
        else if (age > 130)
        {
            cout << "Case #" << ++count << ": Check birth date" << endl;
        }
        // else if (by==cy)
        // {
        //     cout<<"Case #"<<++count<<" 0"<<endl;
        // }
        else
        {
            cout << "Case #" << ++count << ": " << age << endl;
        }
    }
}