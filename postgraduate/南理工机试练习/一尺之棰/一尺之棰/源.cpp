#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int i = 1;
	while (num > 1) {
		num = num / 2;
		i++;
	}

	cout << i << endl;


	return 0;
}