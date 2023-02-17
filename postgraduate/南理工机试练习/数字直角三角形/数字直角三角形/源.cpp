#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int i = 1;
	while (num > 0) {
		int count = num;
		while (count > 0) {
			printf_s("%02d", i);
			i++;
			count--;
		}
		printf_s("\n");
		num--;
	}
	

	return 0;
}