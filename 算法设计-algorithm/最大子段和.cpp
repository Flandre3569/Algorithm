#include<bits/stdc++.h>
using namespace std;
#define NUM 1001
int a[NUM];

int maxSum(int n,int &besti,int &bestj)
{
    int sum=0;
    int b=0;
    int begin=0;
    for(int i=1;i<=n;i++){
        if(b>0){
            b+=a[i];
        }else{
            b=a[i];
            begin=i;
        }
        if(b>sum){
            sum=b;
            besti=begin;
            bestj=i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<maxSum(n,a[1],a[1]);
}
