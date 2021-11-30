# include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a;
	int arr[102];
	int sum=0;
	for (int i = 0; i < a; ++i) {
		cin >> b;
		arr[i] = b;
	}
	cin >> c;
	for (int i = 0; i < a; ++i) {
		if (arr[i] == c) {
			sum++;
		}
	}
	cout << sum << endl;

}