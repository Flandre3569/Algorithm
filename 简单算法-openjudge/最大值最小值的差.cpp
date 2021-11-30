#include<iostream>
using namespace std;
# include <cstring>
# include<iomanip>

int main()
{
	int num;
	cin >> num;
	int a[10100];
	int max = 0;
	int min = 10000;
	for (int i = 0; i < num; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < num; ++i) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}

	cout << max - min << endl;
	return 0;
}