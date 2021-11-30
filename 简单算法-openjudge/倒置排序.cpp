#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a[82], b[82];
    int N, s, n, m;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            s = 0;
            cin >> m;
            a[j] = m;
            for (int i = 1; m != 0; i++)
            {
                s = s * 10 + m % 10;
                m /= 10;
            }
            b[j] = s;
        }
        for (int k = 1; k <= n - 1; k++)
            for (int j = 1; j <= n - k; j++)
                if (b[j] > b[j + 1])
                {
                    swap(b[j], b[j + 1]);
                    swap(a[j], a[j + 1]);
                }

        for (int k = 1; k <= n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
    return 0;
}