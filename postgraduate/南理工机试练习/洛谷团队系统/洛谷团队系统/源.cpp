#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int luogu = 11 + x*3;
	int local = x*5;
	local <= luogu ? cout << "Local" << endl : cout << "Luogu" << endl;

	return 0;
}