# include <iostream>
using namespace std;
# include <cstring>
# include <cstdio>

int main() 
{	
	char ch[300];
	cin >> ch;
	int len;
	len = strlen(ch);
	
	if (ch[len - 2] == 'e' && ch[len - 1] == 'r') {
		if (len != 2) {
			ch[len - 2] = '\0';
			ch[len - 1] = '\0';
		}
	}

	else if (ch[len - 3] == 'i' && ch[len - 2] == 'n' && ch[len - 1] == 'g') {
		if (len != 3) {
			ch[len - 3] = '\0';
			ch[len - 2] = '\0';
			ch[len - 1] = '\0';
		}
	}

	else if (ch[len - 2] == 'l' && ch[len - 1] == 'y') {
		if (len != 2) {
			ch[len - 2] = '\0';
			ch[len - 1] = '\0';
		}
	}

	cout << ch;

}