# include<bits/stdc++.h>
using namespace std;

bool delMin(int nodeList[], int &min_number, int len) {
    if(!nodeList) return false;
    min_number = nodeList[0];
    int num_index = 0;
    cout << len << endl;
    for(int i = 1; i < 5; i++) {
        if(nodeList[i] < min_number) {
           min_number = nodeList[i];
           num_index = i;
        }
    }
    int res = nodeList[num_index];
    nodeList[num_index] = nodeList[len - 1];
    return true;
}

int main()
{
    int nodeList[5] = {5, 4, 1, 2, 3};
    int res;
    int len = 5;
    bool judge = delMin(nodeList, res, len);
    if(!judge) {
        cout << "error" << endl;
    }
    cout << res << endl;
    return 0;
}
