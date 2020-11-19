#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str == "Sunny")
        cout << "Cloudy" << endl;
    if (str == "Cloudy")
        cout << "Rainy" << endl;
    if (str == "Rainy")
        cout << "Sunny" << endl;
}