#include<bits/stdc++.h>
using namespace std;
#define NUM 100
int n;//��װ�������
int c;//�ִ���������
int w[NUM];//��װ�����������

int MaxLoading()
{
    //����������
    queue<int> Q;
    //�ڶ���β�����ӷֲ��־
    Q.push(-1);
    //��ǰ��չ������ڵĲ�
    int i=0;
    //��չ����������
    int Ew=0;
    //��ǰ����������
    int bestw=0;
    //ʣ�༯װ�������
    int r=0;
    for(int j=1;j<n;j++)
        r+=w[j];
    //�����ӿռ���
    while(true)
    {
        //���������
        int wt=Ew+w[i];
        //���Լ������
        if(wt<=c)
        {
            if(wt>bestw) bestw=wt;
            //����������
            if(i<n-1) Q.push(wt);
        }
        //���������
        //����Ͻ�����
        if(Ew+r>bestw&&i<n-1)  Q.push(Ew);
        //�Ӷ�����ȡ������
        Ew=Q.front();
        Q.pop();
        //�ж�ͬ���β��
        if(Ew==-1)
        {
            //����Ϊ�գ��������
            if(Q.empty()) return bestw;
            //ͬ����β����־
            Q.push(-1);
            //�Ӷ�����ȡ������
            Ew=Q.front();
            Q.pop();
            //������һ��
            i++;
            //����ʣ�༯װ������
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
