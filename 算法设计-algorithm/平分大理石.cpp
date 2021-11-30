#include<bits/stdc++.h>
using namespace std;
int a[7];

void DP(int sum)
{
    int i,j,k;
    int mid=sum/2;//大理石总价值的一半
    char visit[200];//大理石的状态数组
    memset(visit,0,sizeof(visit));
    int t;
    visit[0]=1;
    //对每种价值的大理石块
    for(i=1;i<=6;i++)
    for(j=mid;j>=0;j--){
        //价值为j的分配方案存在
        if(visit[j]){
            for(k=1;k<=a[i];k++){
                t=j+i*k;
                if(t>mid) break;
                //增加k块价值为i的大理石，该平分方案仍是成立的
                else visit[t]=1;
                //找到了分配方案
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
