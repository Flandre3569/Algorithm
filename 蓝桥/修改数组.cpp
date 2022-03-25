#include<bits/stdc++.h>
using namespace std;
const int MAXSIZE = 1000002;
int visit[MAXSIZE];

int main()
{
    int n;
    cin>>n;
    int num;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        while(visit[num]) { // 如果这个数存在了，进入循环
            int temp = num; // 记录当前位置的visit数组中的原数
            num += visit[num]; // 过滤掉访问次数
            ++visit[temp];
        }
        visit[num] = 1;
        printf("%d ",num);
    }
}
