#include<iostream>
using namespace std;
# include <cstring>

int main()
{
	char s[210];
	gets(s);
	
	for (int i = 0; i < 210; i++)
	{
		if (s[i] == '\0') 
			break;
		if ('A' <= s[i] && s[i] <= 'Z')
		{
			s[i] = s[i] - 5;
			if (s[i] < 'A') 
				s[i] = s[i] + 26;
		}
		cout << s[i];
	}
}