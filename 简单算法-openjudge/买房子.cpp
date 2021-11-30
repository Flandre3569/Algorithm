# include <iostream>
using namespace std;

int main()
{
    double N, K;
    cin >> N >> K;
    double M = 1.0;
    double F = 200.0;
    double x = N;

    do
    {
        F = F + F * K * 0.01;
        N = N + x;
        M++;
        if (M > 20) {
            cout << "Impossible" << endl;
            break;
        }
    } while (N < F);

    if (M <= 20)
    {
        cout << M << endl;
    }
    return 0;
}