#include<iostream>
using namespace std;

int main()
{
    int a[510];
    int n, b;
    int k = 0;
    int temp;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (b % 2 == 1)
        {
            a[k] = b;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j < k; j++)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    cout << a[0];
    for (int i = 1; i < k; i++)
        cout << "," << a[i];
    return 0;
}