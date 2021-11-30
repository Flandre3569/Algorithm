# include <iostream>
using namespace std;

int main() {
	int sum=0;
	char ch;

	while ((ch=getchar())&&ch!= '\n')
	{
		if (ch >= '0' && ch <= '9') {
			sum++;
		}
	}
	
	cout << sum << endl;

}