#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        int temp = i;
        int countTemp = temp;
        while(temp > 0)
        {
            if(temp % 10 == 2 || temp % 10 == 0 || temp % 10 == 1 || temp % 10 == 9) {
                sum += countTemp;
                break;
            }
            temp = temp / 10;
        }
    }

    cout << sum;
    return 0;
}
