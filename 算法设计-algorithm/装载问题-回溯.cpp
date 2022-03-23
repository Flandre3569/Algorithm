#include<bits/stdc++.h>
using namespace std;

#define NUM 100
int n;//集装箱的数量
int c;//轮船的载重量
int w[NUM];//集装箱的重量数组
int x[NUM];//当前搜索的解向量
int r;//剩余集装箱的重量
int cw;//当前轮船的载重量
int bestw;//当前最优载重量
int bestx[NUM];//当前最优解

void Backtrack(int t)
{
    //到达叶子节点
    if(t>n)
    {
        if(cw>bestw)
        {
            for(int i=1;i<=n;i++)
                bestx[i]=x[i];
            bestw=cw;
        }
        return;
    }
    //更新剩余集装箱的重量
    r-=w[t];
    //搜索左子树
    if(cw+w[t]<=c)
    {
        x[t]=1;
        cw+=w[t];
        Backtrack(t+1);
        cw-=w[t];
    }
    //搜索右子树
    if(cw+r>bestw)
    {
        x[t]=0;
        Backtrack(t+1);
    }

}

int main()
{
    cin>>c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    Backtrack(1);
    cout<<bestw;
}




