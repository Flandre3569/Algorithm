#include<bits/stdc++.h>
using namespace std;

double greedy(vector<int> client,int s)
{
    //���񴰿ڵĹ˿͵ȴ�ʱ��
    vector<int> service(s+1,0);
    //���񴰿ڹ˿͵ȴ�ʱ����ܺ�
    vector<int> sum(s+1,0);
    //�˿͵�����
    int n=client.size();
    //���˿͵ķ���ʱ����������
    sort(client.begin(),client.end());
    //̰���㷨��ʵ��
    int i=0;
    int j=0;
    while(i<n)
    {
        service[j]+=client[i];
        sum[j]+=service[j];
        ++i,++j;
        if(j==s)j=0;
    }
    //�������д��ڷ���ʱ����ܺ�
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

