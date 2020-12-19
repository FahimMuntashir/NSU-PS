// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;
//     int len = str.size();
//     int count = 0;

//     for (int i = 0; i < len; i++)
//     {
//         if (str[2] == str[3] && str[4] == str[5])
//         {
//             count = 1;
//         }
//     }

//     if (count == 1)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
// }
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int l = log10(n)+1;

    cout<<l<<endl;
}