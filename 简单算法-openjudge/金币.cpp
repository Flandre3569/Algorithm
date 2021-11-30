#include <iostream>
using namespace std;

int main()
{
    int daynum;
    int date = 1, money = 0;
    int i = 1;
    int nextdate = 1;

    cin >> daynum;
    for (i = 1; i <= daynum; i++)
    {
        money = money + date;
        if (i == nextdate)
        {
            date++;
            nextdate =nextdate + date;
        }
    }
    cout << money << endl;

    return 0;
}