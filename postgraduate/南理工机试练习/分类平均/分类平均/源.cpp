#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int sumCan = 0, sumNotCan = 0;
	int cursorCan = 0, cursorNotCan = 0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			sumCan += i;
			cursorCan++;
		}
		else {
			sumNotCan += i;
			cursorNotCan++;
		}
	}

	double resCan = sumCan * 1.0 / cursorCan;
	double resNotCan = sumNotCan * 1.0 / cursorNotCan;

	printf_s("%.1f", resCan);
	printf_s(" ");
	printf_s("%.1f", resNotCan);

	return 0;
}