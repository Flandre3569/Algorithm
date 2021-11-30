#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	char str[20000];
	gets(str);
	int len = strlen(str);
	int sum = 0;
	int b[2000];


	for (int i = 0; i < len; ++i) {
		if (str[i] != ' ') {
			sum++;
		}
		else {
			if (sum != 0) {
				cout << sum << ',';
			}
			sum = 0;
		}
		if (i == len - 1) {
			cout << sum;
		}
	}
	
	return 0;
}