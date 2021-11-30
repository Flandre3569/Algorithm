#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char s[510];
    int len, mark;
    int sum = 0;
    int i, j;

    gets(s);
    len = strlen(s);
    s[len] = ' ';

    for (i = 0; i <= len; i++)
    {
        if (s[i] != ' ')
            sum++;
        else
        {
            mark = i;
            for (j = 1; j <= sum; j++) 
                cout << s[--mark];
            sum = 0;
            if (i != len)
                cout << " ";
        }
    }
    cout << endl;
    return 0;
}