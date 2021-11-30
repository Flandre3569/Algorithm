#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int a[10005];
	int L;
	cin >> L;
	for (int i = 0; i <= L; i++) {
		a[i] = 1; 
	}
	int M;
	cin >> M; 
	for (int i = 1; i <= M; i++) {
		int c, d;
		cin >> c >> d;
		for (int j = c; j <= d; j++) {
			a[j] = 0;
		}
	}
	int x;
	x = 0;
	for (int j = 0; j <= L; j++) {
		if (a[j] == 1) {
			x++;
		}
	}
	cout << x;
	return 0;
}