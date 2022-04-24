#include<bits/stdc++.h>
using namespace std;

char getChar(int n)
{
    if (n <= 9)
        return n + '0';
    else
        return n - 10 + 'a';
}
int getInt(char ch)
{
    if ('0' <= ch && ch <= '9')
        return ch - '0';
    else
        return ch - 'a' + 10;
}
string add(string a, string b)
{
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    int x, y;
    string res;
    while (i >= 0 || j >= 0 || carry)
    {
        x = i >= 0 ? getInt(a[i]) : 0;
        y = j >= 0 ? getInt(b[j]) : 0;
        int temp = x + y + carry;
        res = getChar(temp % 36) + res;
        carry = temp / 36;
        i--, j--;
    }
    return res;
}

int main()
{
    string a, b;
    cin >> a >> b;

    string result = add(a ,b);
    cout << result << endl;
}
