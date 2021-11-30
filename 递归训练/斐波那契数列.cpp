# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int a[50];
    int m;

    while (i < n) {
        int count = 0;
        cin >> m;
        a[0] = 1;
        a[1] = 1;
        for (int j = 2; j < m; j++) {
            a[j] = a[j - 1] + a[j - 2];
        }
       
        cout << a[m-1] << endl;
        i++;

    }
    return 0;
}