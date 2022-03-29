#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> args;
    int num;

    for(int i = 0; i < n; i++) {
        cin>>num;
        args.push_back(num);
    }

    int j = 0;
    // 记录当前值和最大值
    int maxSum = 0, temp = 0, record = 0;
    // 记录最大值属于第几层
    int countNum = 0;

    for(int i = 0;i < n;) {
        while(j < pow(2, record)) {
            temp += args[i];
            i++; //记录当前
            j++;
        }
        if(temp > maxSum) {
            maxSum = temp;
            countNum = record + 1;
        }
        temp = 0;
        record++;
        j = 0;
    }

    cout<<countNum<<endl;
}
