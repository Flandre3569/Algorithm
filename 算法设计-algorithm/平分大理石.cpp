#include<bits/stdc++.h>
using namespace std;
int a[7];

void DP(int sum)
{
    int i,j,k;
    int mid=sum/2;//����ʯ�ܼ�ֵ��һ��
    char visit[200];//����ʯ��״̬����
    memset(visit,0,sizeof(visit));
    int t;
    visit[0]=1;
    //��ÿ�ּ�ֵ�Ĵ���ʯ��
    for(i=1;i<=6;i++)
    for(j=mid;j>=0;j--){
        //��ֵΪj�ķ��䷽������
        if(visit[j]){
            for(k=1;k<=a[i];k++){
                t=j+i*k;
                if(t>mid) break;
                //����k���ֵΪi�Ĵ���ʯ����ƽ�ַ������ǳ�����
                else visit[t]=1;
                //�ҵ��˷��䷽��
                if(t==mid){
                    cout<<"Can be divided"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"Can't be divided"<<endl;
}

int main()
{
    int sum=0;
    for(int i=1;i<7;i++){
        cin>>a[i];
        sum+=(a[i]*i);
    }
    DP(sum);
}
