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
    // ��¼��ǰֵ�����ֵ
    int maxSum = 0, temp = 0, record = 0;
    // ��¼���ֵ���ڵڼ���
    int countNum = 0;

    for(int i = 0;i < n;) {
        while(j < pow(2, record)) {
            temp += args[i];
            i++; //��¼��ǰ
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
