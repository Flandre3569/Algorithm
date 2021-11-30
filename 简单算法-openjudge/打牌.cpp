# include <iostream>
using namespace std;

int main()
{
    int a;
    
    char b;
    
    char c;
    cin >> a >> b >> c;
    if (a >= 10)
    {
        if (b == 'J')
        {
            cout << 'Z' << endl;
        }
        else if (b == 'H')
        {
            cout << "pass" << endl;
        }

    }
    else if (a < 10)
    {
        if (c == 'D')
        {
            cout << 'D' << endl;
        }
        else if (c == 'S')
        {
            cout << 'S' << endl;
        }
    }

    return 0;
}