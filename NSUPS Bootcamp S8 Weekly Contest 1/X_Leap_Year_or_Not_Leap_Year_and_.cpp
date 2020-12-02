#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;

    while (cin)
    {
        if (year % 400 == 0)
        {
            cout << "This is leap year." << endl;
        }
        else if (year % 4 == 0 && year % 100 != 0)
        {
            cout << "This is leap year." << endl;
        }
        else if (year % 15 == 0)
        {
            cout << "This is huluculu festival year." << endl;
        }
        else if (year % 55 == 0)
        {
            cout << "This is Bulukulu festival year." << endl;
            cout<<"This is leap year."<<endl;
        }
        else
        {
            cout << "This is an ordinary year." << endl;
        }

        cin>>year;
    }
}