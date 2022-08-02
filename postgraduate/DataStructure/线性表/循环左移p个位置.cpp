#include<bits/stdc++.h>
using namespace std;

void reverse(int left, int right, int NodeList[])
{
    while(left < right) {
        int temp = NodeList[left];
        NodeList[left] = NodeList[right];
        NodeList[right] = temp;
        left++;
        right--;
    }
}

void cycleLeft(int p, int NodeList[], int len)
{
    int left = 0;
    int right = len - 1;
    reverse(0, p-1, NodeList);
    reverse(p, len-1, NodeList);
    reverse(0,len-1,NodeList);
}


int main()
{
    int nodeList[6] = {1, 2, 3, 4, 5, 6};
    cycleLeft(3, nodeList, 6);

    for(int i = 0; i < 6; i++) {
        cout << nodeList[i] << "\t";
    }
    cout << endl;
    return 0;
}
