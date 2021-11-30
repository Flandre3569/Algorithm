# include <iostream>
using namespace std;
# include<cstring>


int main() 
{
	string ch;
	int num;
	int sum=1;
	cin >> num;
	cin >> ch;
	for (int i = 0;ch[i]; i++) {

		if (ch[i] == ch[i + 1]) {
			sum++;
		}
		else {
			if (sum > num || sum == num) {
				cout << ch[i] << endl;
				return 0;
			}

			else sum = 1;
		}
	}
	cout << "No" << endl;
	return 0;
}