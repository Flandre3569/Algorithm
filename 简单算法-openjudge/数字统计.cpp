#include <iostream>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	int sum=0;
	int j;
	for (int i = m; i <= n; ++i)
	{
		int j = i;
		while (j!=0) {
			if (j % 10 == 2) {
				sum++;
			}
			j = j / 10;
		}
	}
	cout << sum << endl;
	return 0;
}