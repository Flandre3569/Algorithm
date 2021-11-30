# include <iostream>
using namespace std;

int main()
{
	int m, n, x;
	cin >> m >> n >> x;
	int M = 0;
	for (int i = 0; i < x; i++) {
		M += n;
		if (M >= m) 
		{
			n += m / n;
			M = 0;
		}
	}
	cout << n;
}