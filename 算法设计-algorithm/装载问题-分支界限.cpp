#include<bits/stdc++.h>
using namespace std;
#define NUM 100
int n;//集装箱的数量
int c;//轮船的载重量
int w[NUM];//集装箱的重量数组

int MaxLoading()
{
    //定义活结点队列
    queue<int> Q;
    //在队列尾部增加分层标志
    Q.push(-1);
    //当前扩展结点所在的层
    int i=0;
    //扩展结点的载重量
    int Ew=0;
    //当前最优载重量
    int bestw=0;
    //剩余集装箱的重量
    int r=0;
    for(int j=1;j<n;j++)
        r+=w[j];
    //搜索子空间树
    while(true)
    {
        //检查左子树
        int wt=Ew+w[i];
        //检查约束条件
        if(wt<=c)
        {
            if(wt>bestw) bestw=wt;
            //加入活结点队列
            if(i<n-1) Q.push(wt);
        }
        //检查右子树
        //检查上界条件
        if(Ew+r>bestw&&i<n-1)  Q.push(Ew);
        //从队列中取出活结点
        Ew=Q.front();
        Q.pop();
        //判断同层的尾部
        if(Ew==-1)
        {
            //队列为空，搜索完毕
            if(Q.empty()) return bestw;
            //同层结点尾部标志
            Q.push(-1);
            //从队列中取出活结点
            Ew=Q.front();
            Q.pop();
            //进入下一层
            i++;
            //更新剩余集装箱重量
            r-=w[i];
        }
    }
    return bestw;
}

int main()
{
    cin>>c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }

    int best=MaxLoading();
    cout<<best<<endl;
}
