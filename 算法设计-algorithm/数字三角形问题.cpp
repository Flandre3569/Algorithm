#include<bits/stdc++.h>
using namespace std;
#define NUM 100
int tri[NUM][NUM];

//从底向上遍历
int triangle(int n)
{
    int i,j;
    for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(tri[i+1][j]>tri[i+1][j+1])
                tri[i][j]+=tri[i+1][j];
            else tri[i][j]+=tri[i+1][j+1];
        }
    }
    return tri[0][0];
}

int main()
{
    tri[0][0]=9;
    tri[1][0]=12;
    tri[1][1]=15;

    cout<<triangle(2);
}
