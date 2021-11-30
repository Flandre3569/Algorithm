#include<iostream>
using namespace std;
# include <cstring>

int main()
{
	char a[85];
	char b[85];

	cin.getline(a, 85);
	cin.getline(b, 85);

	int len1 = strlen(a);
	int len2 = strlen(b);
	
	for (int i = 0; i < len1; ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + 32;
		}
	}
	for (int i = 0; i < len2; ++i) {
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] = b[i] + 32;
		}
	}
	int j = 0;
	while (a[j] != '\0' && (a[j] == b[j]))
	{
		j++;
	}
	if (a[j] > b[j])
	{
		cout << '>';
	}
	else if (a[j] < b[j])
	{
		cout << '<';
	}
	else
	{
		cout << '=';
	}
	return 0;
}