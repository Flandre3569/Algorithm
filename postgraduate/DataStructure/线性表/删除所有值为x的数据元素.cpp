#include<bits/stdc++.h>
using namespace std;

void deleteX(int nodeList[], int x, int &len)
{
    int cursor = 0;
    for(int i = 0; i < len; i++) {
        if(nodeList[i] != x) {
            nodeList[cursor] = nodeList[i];
            cursor++;
        }
    }
    len = cursor;
}

int main()
{
    int nodeList[5] = {1,2,3,1,4};
    int len = 5;
    deleteX(nodeList, 1, len);
    for(int i = 0; i < len; i++) {
        cout << nodeList[i] << "\t";
    }
    return 0;
}
