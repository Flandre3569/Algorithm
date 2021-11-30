# include <iostream>
using namespace std;
# include <iomanip>
# include <cmath>
int main()
{
    double a, b, c, x1, x2, delt;
    cin >> a >> b >> c;
    delt = b * b - 4 * a * c;
    if (delt == 0)
    {
        x1 = x2 = -b / (2 * a);
        cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
    }
    else if (delt > 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << fixed << setprecision(5) << "x1=" << x1 << ';' << "x2=" << x2 << endl;
    }
    else
    {
        double m = -b / (2 * a);
        double n = sqrt(4 * a * c - b * b) / (2 * a);
        if (b != 0)
        {
            cout << fixed << setprecision(5) << "x1=" << m << '+' << n << 'i' << ';' << "x2=" << m << '-' << n << 'i' << endl;
        }
        else {
            cout << fixed << setprecision(5) << "x1=0.00000" << '+' << n << 'i' << ';' << "x2=0.00000" << '-' << n << 'i' << endl;
        }

    }
    return 0;
}