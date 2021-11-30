#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char str[210];
    char str1[210];
    gets(str);
    int i, j = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (!((str[i] == ' ') && (str[i + 1] == ' ')))

            str1[j++] = str[i];
    }
    str1[j] = '\0';
    puts(str1);
    return 0;
}