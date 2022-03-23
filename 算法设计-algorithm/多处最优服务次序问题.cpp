#include<bits/stdc++.h>
using namespace std;

double greedy(vector<int> client,int s)
{
    //服务窗口的顾客等待时间
    vector<int> service(s+1,0);
    //服务窗口顾客等待时间的总和
    vector<int> sum(s+1,0);
    //顾客的数量
    int n=client.size();
    //按顾客的服务时间升序排序
    sort(client.begin(),client.end());
    //贪心算法的实现
    int i=0;
    int j=0;
    while(i<n)
    {
        service[j]+=client[i];
        sum[j]+=service[j];
        ++i,++j;
        if(j==s)j=0;
    }
    //计算所有窗口服务时间的总和
    double t=0;
    for(i=0;i<s;++i){
        t+=sum[i];
    }
    t/=n;
    return t;
}

int main()
{

    vector<int> client;
    client.push_back(56);
    client.push_back(12);
    client.push_back(1);
    client.push_back(99);
    client.push_back(1000);
    client.push_back(234);
    client.push_back(33);
    client.push_back(55);
    client.push_back(99);
    client.push_back(812);
    cout<<greedy(client,2);
}

