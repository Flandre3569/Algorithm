# include <iostream>
# include <cstring>
using namespace std;

int main()
{
	int num[120]; double c[120];
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> num[i] >> c[i];
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
			if (c[i] < c[j])
			{
				int temp1;
				double temp2;
				temp1 = num[i]; 
				num[i] = num[j];
				num[j] = temp1;
				temp2 = c[i];
				c[i] = c[j];
				c[j] = temp2;
			}
	cout << num[k] << " ";
	printf("%g", c[k]);

	return 0;
}