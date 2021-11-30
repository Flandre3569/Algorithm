#include<cstdio>
# include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[120];
    char b[120];
    int m = 0;
    cin.getline(a, 120);
    int n = strlen(a);
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
        {
            b[m] = (int)(a[0] + a[i]);
        }
        else
        {
            b[m] = (int)(a[i] + a[i + 1]);
            m++;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i];
    }
    return 0;
}