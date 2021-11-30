#include<bits/stdc++.h>
using namespace std;

char cMap[5][5];//地图
int iBest;//最优解
int n;//地图的大小

bool CanPut(int row,int col)
{
    int i;
    //判断col列上的合法性
    for(i=row-1;i>=0;i--){
        if(cMap[i][col]=='O') return false;
        if(cMap[i][col]=='X')break;
    }
    //判断row行上的合法性
    for(i=col-1;i>=0;i--){
        if(cMap[row][i]=='O') return false;
        if(cMap[row][i]=='X') break;
    }
    return true;
}

void solve(int k,int current)
{
    //坐标
    int x,y;
    //判断地图是否推算完毕
    if(k==n*n){
        if(current>iBest){
            iBest=current;
            return;
        }
    }else{
        //将图标坐标化
        x=k/n;
        y=k%n;
        //如果可以放碉堡
        if(cMap[x][y]=='.'&&CanPut(x,y)){
            cMap[x][y]='O';
            solve(k+1,current+1);
            cMap[x][y]='.';
        }
        //如果不能放置碉堡
        solve(k+1,current);
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cMap[i][j];
        }
    }
    solve(0,0);
    cout<<iBest<<endl;
}
