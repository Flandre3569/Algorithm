#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;
    for(int i = 0; i < 3; i++) {
        if (i != 0) cout << endl;
        for(int j = 0; j < abs(2-i); j++) {
            cout << ' ';
        }
        for(int j = 0; j < abs(2-abs(2-i))*2 + 1; j++) {
            cout << a;
        }
    }
    return 0;
}
