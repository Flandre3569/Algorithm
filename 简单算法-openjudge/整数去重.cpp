# include <iostream>
using namespace std;

int main() 
{	
	int a[20000];
	int num;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < num; ++i) {
		for (int j = (i+1); j < num; ++j) {
			if (a[i] == a[j]) {
				a[j] = 0;
			}
		}
	}

	for (int i = 0; i < num; ++i) {
		if (a[i] != 0) {
			cout << a[i] << " ";
		}
	}

}