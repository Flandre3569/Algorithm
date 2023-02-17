#include<iostream>
using namespace std;

int main()
{
	double m, h;
	cin >> m >> h;
	double standard = (m * 1.0) / (h * h);
	cout << standard << endl;
	if (standard < 18.5) cout << "Underweight" << endl;
	else if (standard >= 18.5 && standard < 24) cout << "Normal" << endl;
	else {
		cout << standard << endl;
		cout << "Overweight" << endl;
	}

	return 0;
}