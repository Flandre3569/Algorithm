#include<iostream>
using namespace std;
# include <cstring>

int main()
{
	int num;
	cin >> num;
	int a[120];
	string b[120];
	for (int i = 0; i < num; ++i) {
		cin >> a[i] >> b[i];
	}
	int max = 0;
	int mark = 0;
	for (int i = 0; i < num; ++i) {
		if (max < a[i]) {
			max = a[i];
			mark = i;
		}
	}
	cout << b[mark];
}