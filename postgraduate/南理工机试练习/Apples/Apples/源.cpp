#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num <= 1) {
		cout << "Today, I ate " << num << " apple." << endl;
	}
	else {
		cout << "Today, I ate " << num << " apples." << endl;
	}

	return 0;
}