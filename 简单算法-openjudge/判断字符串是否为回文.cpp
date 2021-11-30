#include<iostream>
using namespace std;
# include <cstring>

int main()
{
    char str[200];
    cin >> str;
    int len = strlen(str), i, j;
    int mark=1;
    for (i = 0, j = len - 1; i <= len / 2; i++, j--)
    {
        if (str[i] != str[j])
            mark = 0;
    }
    
    if (mark == 1)
    {
        cout << "yes";
    }
    else
        cout << "no";
	
}