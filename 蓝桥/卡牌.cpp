#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum[10];
    for(int i = 0; i <= 9; i++)
    {
        // 每种卡牌都是2021张
        sum[i] = 2021;
    }

    int i;
    for(i = 1;i <= 20210; i++)
    {
        int t = i,flag = 0;
        while(t)
        {
            // 相应数值卡片减一
            sum[t % 10]--;
            if(sum[t % 10] == -1) {
                flag = 1;
                break;
            }
            // 进一位
            t = t / 10;
        }

        if(flag) break;
    }
    cout << i-1;

    return 0;
}
