#include<iostream>
using namespace std;
#include<cstdio>

int main()
{
	char a[100000];
	int i, j, b;
	cin >> a;
	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			b = 1;
			for (j = i + 1; a[j]; j++)
			{
				if (a[j] == a[i])
				{
					a[j] = 'A';
					if (b)
					{
						b = 0; 
					}
				}
			}
			if (b)
			{
				cout << a[i];
				break;
			}
		}
	}

	if (a[i] == 0)
	{
		cout << "no";
	}

	return 0;
}