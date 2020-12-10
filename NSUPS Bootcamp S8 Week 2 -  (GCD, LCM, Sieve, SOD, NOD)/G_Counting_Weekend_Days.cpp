#include <bits/stdc++.h>

using namespace std;

int main()
{
    string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int t;
    cin >> t;
    while (t--)
    {
        string month, day;
        int total = 31, start = 0, count = 0;
        cin >> month >> day;
        if (month == "FEB")
        {
            total = 28;
        }
        else if (month == "SEP" || month == "APR" || month == "JUN" || month == "NOV")
            total = 30;
        for (int i = 0; i < 7; i++)
        {
            if (days[i] == day)
            {
                start = i;
                break;
            }
        }
        for (int i = 0; i < total; i++)
        {
            if (days[start] == "SAT" || days[start] == "FRI")
            {
                count++;
            }

            if (start == 6)
            {
                start = 0;
            }

            else
            {
                start++;
            }
        }
        cout << count << endl;

    }
}