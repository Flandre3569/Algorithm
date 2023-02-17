#include<iostream>
#include<cmath>
using namespace std;

bool isTri(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) return true;
	else return false;
}

void exchange(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) {
		exchange(a, b);
	}
	if (a > c) {
		exchange(a, c);
	}

	if (b > c) {
		exchange(b, c);
	}

	if (!isTri(a, b, c)) cout << "Not triangle" << endl;
	else {
		if (a * a + b * b == c * c) cout << "Right triangle" << endl;
		if (a * a + b * b > c * c) cout << "Acute triangle" << endl;
		if (a * a + b * b < c * c) cout << "Obtuse triangle" << endl;
		if (a == b || a == c || b == c) cout << "Isosceles triangle" << endl;
		if (a == b && a == c && b == c) cout << "Equilateral triangle" << endl;
	}


	return 0;
}