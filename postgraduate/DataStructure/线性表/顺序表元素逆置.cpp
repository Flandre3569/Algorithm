#include<bits/stdc++.h>
using namespace std;

void reverseList(int nodeList[], int len)
{
    int temp;
//  只遍历数组前半部分，减少时间复杂度。
    for(int i = 0; i < len/2; i++) {
        temp = nodeList[i];
        nodeList[i] = nodeList[len - i - 1];
        nodeList[len - i - 1] = temp;
    }
}

int main()
{
    int nodeList[5] = {1,2,3,4,5};
    reverseList(nodeList, 5);

    for(int i = 0; i < 5; i++) {
        cout << nodeList[i] << "\t";
    }
    return 0;
}
