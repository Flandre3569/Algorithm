#include<iostream>
using namespace std;


int zuiDaGongYueShu(int a,int b) {
	if (a > b) {
		if (a % b == 0)
			return b;
		else {
			zuiDaGongYueShu(b, a % b);
		}
	}
	else {
		if (b%a == 0)
			return a;
		else {
			zuiDaGongYueShu(a, b % a);
		}
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	int c = zuiDaGongYueShu(a, b);
	cout << c;
}