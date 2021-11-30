#include<iostream>
using namespace std;
//整数因子分解
int total;
void solve(int n,int k)
{
    if (n == 1) total++;
    else {
        for (int i = k; i <= n; i++) {
            if (n % i == 0) solve(n / i,i);
        }
    }
}

int main()
{
    int n;
    int num;
    cin >> num;
    int count = 0;
    while (count<num) {
        cin >> n;
        total = 0;
        solve(n,2);
        cout << total << endl;
        count++;
    }

}