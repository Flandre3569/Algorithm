#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num;
    cin >> num;
    double sum = 0;
    while(num != 0){
        double a = num % 10;
        sum = sum*10 + a;
    }
    cout << sum << endl;

    return 0;
}
