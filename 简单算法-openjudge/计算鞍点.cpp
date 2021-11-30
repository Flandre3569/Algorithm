# include <iostream>
# include <cstdio>
using namespace std;

int main()
{
	int a[5][5];
	bool x = false;
	int bi = 0, ci = 0, bj = 0, cj = 0;
	int max = 0, min = 100000;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{

			if (a[i][j] > max)
			{
				max = a[i][j];
				bi = i;
				bj = j;
			}
		}
		for (int k = 0; k < 5; k++)
		{
			if (a[k][bj] < min)
			{
				min = a[k][bj];
				ci = k;
				cj = bj;
			}
		}
		if (bi == ci)
		{
			cout << ++bi << " " << ++bj << " " << max << endl;
			x = true;
			break;
		}
		bi = 0, ci = 0, bj = 0, cj = 0;
		max = 0, min = 100000;
	}
	if (x == false)
	{
		cout << "not found";
	}
}