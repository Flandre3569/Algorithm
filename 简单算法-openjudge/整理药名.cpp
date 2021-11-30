#include<iostream>
using namespace std;
# include <cstring>

int main()
{
	int a;
	cin >> a;
	char str[120];
	int len;
	for (int i = 0; i < a; ++i) {
		cin >> str;
		if (str[0] >= 'a' && str[0] <= 'z') {
			str[0] = str[0] - 32;
		}
		len = strlen(str);
		for (int j = 1; j < len; ++j) {
			if (str[j] >= 'A' && str[j] <= 'Z') {
				str[j] = str[j] + 32;
			}
		}
		cout << str << endl;
	}
}