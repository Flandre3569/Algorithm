#include<bits/stdc++.h>
using namespace std;

#define NUM 100
int n;//��װ�������
int c;//�ִ���������
int w[NUM];//��װ�����������
int x[NUM];//��ǰ�����Ľ�����
int r;//ʣ�༯װ�������
int cw;//��ǰ�ִ���������
int bestw;//��ǰ����������
int bestx[NUM];//��ǰ���Ž�

void Backtrack(int t)
{
    //����Ҷ�ӽڵ�
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
    //����ʣ�༯װ�������
    r-=w[t];
    //����������
    if(cw+w[t]<=c)
    {
        x[t]=1;
        cw+=w[t];
        Backtrack(t+1);
        cw-=w[t];
    }
    //����������
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




