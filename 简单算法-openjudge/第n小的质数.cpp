#include <iostream>
using namespace std;
#include <cmath>


int main()
{
	long n;
	cin >> n;
	int m = 1;
	long sum = 0;

	for (int i = 2; ; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				m = 0;
				break;
			}
		}

		if (m == 1) {
			sum++;
		}
		m = 1;

		if (sum == n) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}