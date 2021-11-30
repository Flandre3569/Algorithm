#include<iostream>
using namespace std;
# include <cstring>

int main()
{
    char str[1100];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    int sum = 1;
    for (int i = 0; i < len; ++i) {
        if (str[i] == str[i + 1]) {
            sum++;
        }
        else {
            cout << '(' << str[i] << ',' << sum << ')';
            sum = 1;
        }

    }

}