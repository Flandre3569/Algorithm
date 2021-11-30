# include <iostream>
using namespace std;

int main() 
{
	int num;
	int ch[10000];
	cin >> num;
	
	int a = 1, b=0;
	cin >> ch[0];
	for (int i = 1; i<num; i++) {
		cin >> ch[i];
		if (ch[i] == ch[i-1]) {
			a++;
		}
		else
			a=1;
		if (a > b) {
			b = a;
		}
	}
	cout << b;

	return 0;
}