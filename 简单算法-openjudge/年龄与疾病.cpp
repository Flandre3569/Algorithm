#include<iostream>
using namespace std;
# include <cstring>
# include<iomanip>

int main()
{
	int num;
	cin >> num;
	int a[101];
	int m = 0, n = 0, p = 0, q = 0;
	for (int i = 0; i < num; ++i) {
		cin >> a[i];
		if (a[i] > 0 && a[i] <= 18) {
			m++;
		}
		if (a[i] > 18 && a[i] <= 35) {
			n++;
		}
		if (a[i] > 35 && a[i] <= 60) {
			p++;
		}
		if (a[i] >= 61) {
			q++;
		}
	}

	cout << fixed << setprecision(2) << (double)m / num * 100.0 << '%' << endl;
	cout << fixed << setprecision(2) << (double)n / num * 100.0 << '%' << endl;
	cout << fixed << setprecision(2) << (double)p / num * 100.0 << '%' << endl;
	cout << fixed << setprecision(2) << (double)q / num * 100.0 << '%' << endl;
	
}