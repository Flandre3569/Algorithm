#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double sum=0;
	for (int i = 0; i <= n; ++i)
	{
		if (i % 7 != 0 && i % 10 != 7 && (i / 10) % 10 != 7)
		{
			sum = sum + i * i;
		}
	}
	cout << sum << endl;
	return 0;
}