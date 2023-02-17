#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int A = 0, Uim = 0, Ba = 0, ZM = 0;
	if (x % 2 == 0 && x > 4 && x <= 12) {
		A = 1;
	}
	
	if (x % 2 == 0 || (x > 4 && x <= 12)) {
		Uim = 1;
	}

	if (x % 2 == 0 && (x < 4 || x>12)) {
		Ba = 1;
	}

	if (x % 2 == 1 && (x > 4 && x <= 12)) {
		Ba = 1;
	}

	if(x%2==1&&(x<4||x>12)){
		ZM = 1;
	}

	cout << A << " " << Uim << " " << Ba << " " << ZM << endl;



	return 0;
}