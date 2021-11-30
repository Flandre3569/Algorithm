# include<iostream>
using namespace std;

int fun(int m, int n) {
	if (m == 0 || n == 1)
		return 1;
	if (m < n)
		return fun(m, m);
	else
		return fun(m, n - 1) + fun(m - n, n);
}

int main() {
	int m, n;
	int num;
	cin >> num;
	int count = 0;
	while (count < num) {
		cin >> m >> n;
		cout << fun(m, n) << endl;
		count++;
	}
	return 0;
}