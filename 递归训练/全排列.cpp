#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

string s[1001];
int x = 0;
void Perm(char list[], int k, int m)
{
    if (k == m)
    {
        string q = "";
        for (int i = 0; i <= m; i++) 
            q += list[i];
        s[x] = q;
        x++;
    }
    else
    {
        for (int j = k; j <= m; j++)
        {
            swap(list[k], list[j]);
            Perm(list, k + 1, m);
            swap(list[k], list[j]);
        }
    }
}

int main()
{
    int num = 0;
    char a[7];
    while ((a[num] = getchar()) != '\n') num++;
    Perm(a, 0, num - 1);
    sort(s, s + x);
    for (int i = 0; i < x; i++)
    {
        cout << s[i] << endl;
    }

}