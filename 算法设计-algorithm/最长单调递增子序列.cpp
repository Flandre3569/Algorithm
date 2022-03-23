#include<bits/stdc++.h>
using namespace std;
#define NUM 100
int a[NUM];

int MaxIncre(int n)
{
    int b[NUM]={0};
    int i,j;
    b[1]=1;
    int max=0; //数组b的最大值
    for(i=2;i<=n;i++){
        int k=0;
        for(j=1;j<i;j++)
            if(a[j]<=a[i]&&k<b[j]) k=b[j];
        b[i]=k+1;
        if(max<b[i]) max=b[i];
    }
    return max;
}


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<MaxIncre(n);
}
