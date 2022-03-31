#include<bits/stdc++.h>
using namespace std;


int main()
{
    int add, sub;
    cin >> add >> sub;
    int args[200005];
    int n = add + sub + 1;
    for(int i = 0; i < n; i++) {
        cin >> args[i];
    }

    sort(args, args + n ,greater<int>());
    long long temp = args[0];
    int cursor = 0;
    for(int i = 0; i < add; i++) {
        temp += args[cursor + 1];
        cursor++;
    }
    for(int j = 0; j < sub; j++) {
        temp -= args[cursor + 1];
        cursor++;
    }
    cout << temp;

    return 0;
}
