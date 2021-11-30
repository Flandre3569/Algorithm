# include <iostream>
using namespace std;

int main()
{
    long m;
    cin >> m;
    while (m != 1) {
        if (m % 2 != 0)
        {
            cout << m << "*3+1=";
            m = m * 3 + 1;
            cout << m << endl;

        }
        else if(m%2==0)
        {
            cout << m << "/2=" << m / 2 << endl;
            m = m / 2;

        }
    }

    cout << "End";

}