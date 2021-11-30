# include<iostream>
using namespace std;

int pellList[1000000];

int pell(long long n) {
	if (pellList[n] > 0) return pellList[n];
	if (n == 1) return 1;
	if (n == 2) return 2;
	return pellList[n] = ((2 * pell(n - 1) + pell(n - 2)) % 32767);
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	long long a;
	while (count < n) {
		cin >> a;
		cout << pell(a) << endl;
		count++;
	}
	return 0;
}