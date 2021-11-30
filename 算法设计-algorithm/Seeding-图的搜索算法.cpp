#include<bits/stdc++.h>
using namespace std;
#define NUM 10
char field[NUM][NUM];//田地
int n,m;//田地的大小
int visited;//访问田地中方格的数量
int flag;//全部播种完毕的标志
int counter;//递归的次数计数

//形参是方格的坐标
void dfs(int x,int y)
{
    //方格的边界判断
    if(x<0||y<0||x>=n||y>=m)
        return;
    //方格里是石头
    if(field[x][y]=='S')
        return;
    //已经全部播种完毕
    if(flag)
        return;
    //递归的次数计数，限制不要超过1500次
    counter++;
    if(counter>1500)
        return;
    //将方格里面置为石头，避免重复搜索
    field[x][y]='S';
    //访问的方格计数
    visited++;
    //全部方格访问完毕
    if(visited==n*m)
    {
        flag=1;
        return;
    }
    //分别向4个临近方向播种
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    //恢复递归现场
    visited--;
    field[x][y]='.';
}

int main()
{
    int i,j;
    while(scanf("%d%d",&n,&m),n||m)
    {
        int sum=0;
        flag=false;
        for(i=0; i<n; i++)		//利用字符串输入，省时
            scanf("%s",&field[i]);
        for(i=0; i<n; i++)		//找出有石块的田地
            for(j=0; j<m; j++)
                if(field[i][j]=='S')
                    sum++;
        dfs(0,0);
        if(flag)
            puts("YES");
        else
            puts("NO");

        return 0;
    }
}


