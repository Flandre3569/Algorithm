#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	int x;
	cin >> n;
	for (int i = n; i > 0; i--) {
		x = 1;
		for (int j = i; j > 0; j--) {
			x =x*j;
		}
		sum =sum+ x;
	}
	cout << sum << endl;

	return 0;
}