#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	if (t == 0) cout << 0 << endl;
	else {
		int res = m - (int)ceil(s * 1.0 / t);
		if (res <= 0) res = 0;
		cout << res << endl;
	}

	return 0;
}