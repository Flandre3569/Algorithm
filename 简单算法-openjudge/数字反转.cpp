#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int x = 0;

	while ( num!=0 ) {
		x = x * 10 + ( num % 10);
		num = num/10;
	}
	cout << x;


	return 0;
}