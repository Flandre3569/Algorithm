#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int temp = 1;
		for (int j = i; j > 0; j--) {
			temp *= j;
		}
		sum += temp;
	}

	cout << sum << endl;

	return 0;
}