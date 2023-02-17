#include<iostream>
using namespace std;

#define MAXSIZE 101

int main()
{
	int n;
	cin >> n;
	int min = 1001;
	int a[MAXSIZE];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) min = a[i];
	}

	cout << min << endl;


	return 0;
}