#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int maxNum = max({ a, b, c });
	int minNum = min({ a, b, c });
	int midNum = a + b + c - maxNum - minNum;
	cout << minNum << " " << midNum << " " << maxNum << endl;

	return 0;
}
