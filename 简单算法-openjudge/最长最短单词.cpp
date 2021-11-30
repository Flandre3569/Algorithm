#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	char str[20000];
	cin.getline(str, 20000);
	int len = strlen(str);
	str[len] = ' ';
	int sum = 0;
	int mark1,mark2;
	int max = 0, min = 100;


	for (int i = 0; i <= len; ++i) {
		if (str[i] != ' ') {
			sum++;
		}
		else {
			if(max<sum){
				max = sum;
				mark1 = i;
			}
			if (min > sum) {
				min = sum;
				mark2 = i;
			}
			sum = 0;
		}
	}

	for (int i = (mark1 - max); i < mark1; i++) { 
		cout << str[i];
	}
	cout << endl;
	for (int i = (mark2 - min); i < mark2; i++) { 
		cout << str[i];
	}
	return 0;
}