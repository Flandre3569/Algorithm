#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	int cla, outCla;
	int temp = 0, cursor = 0, max = 0;
	while (i < 7) {
		cin >> cla >> outCla;
		temp = cla + outCla;
		if (temp > 8 && temp > max) {
			max = temp;
			cursor = i + 1;
		}

		i++;
	}

	cout << cursor << endl;
	return 0;
}