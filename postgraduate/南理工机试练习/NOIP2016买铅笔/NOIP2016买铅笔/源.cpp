#include<iostream>
using namespace std;

int main()
{
	int pNum;
	cin >> pNum;
	int count, price;
	int i = 0, min = INT16_MAX;
	while (i < 3) {
		cin >> count >> price;
		int res = pNum / count;
		int temp = pNum % count;
		if (temp != 0) res += 1;
		
		int resPrice = res * price;
		if (resPrice < min) {
			min = resPrice;
		}

		i++;
	}

	cout << min << endl;
	return 0;
}