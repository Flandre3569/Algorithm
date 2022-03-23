#include<bits/stdc++.h>
using namespace std;

struct bag{
    int w;
    int v;
    double c;
}a[1001];

bool cmp(bag a,bag b){
    return a.c>=b.c;
}



double knapsack(int n,bag a[],double c){
    double cleft=c;
    int i=0;
    double b=0;
    //当背包还能完全装下物品
    while(i<n&&a[i].w<=cleft){
        cleft-=a[i].w;
        b+=a[i].v;
        i++;
    }
    //装满剩余空间
    if(i<n) b+=1.0*a[i].v*cleft/a[i].w;
    return b;
}

int main()
{
    int n=3;
    a[0].w=10;a[0].v=60;a[0].c=6;
    a[1].w=20;a[1].v=100;a[1].c=5;
    a[2].w=30;a[2].v=120;a[2].c=4;
    sort(a,a+n,cmp);
    double x=knapsack(n,a,50);
    cout<<x;
}
