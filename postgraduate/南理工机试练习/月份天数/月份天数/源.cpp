#include<iostream>
using namespace std;

bool ifRunNian(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return true;
	}
	else return false;
}

int main()
{
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month;
	cin >> year >> month;
	if (ifRunNian(year)) days[1] = 29;
	cout << days[month - 1] << endl;


	return 0;
}