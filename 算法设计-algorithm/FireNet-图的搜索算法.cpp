#include<bits/stdc++.h>
using namespace std;

char cMap[5][5];//��ͼ
int iBest;//���Ž�
int n;//��ͼ�Ĵ�С

bool CanPut(int row,int col)
{
    int i;
    //�ж�col���ϵĺϷ���
    for(i=row-1;i>=0;i--){
        if(cMap[i][col]=='O') return false;
        if(cMap[i][col]=='X')break;
    }
    //�ж�row���ϵĺϷ���
    for(i=col-1;i>=0;i--){
        if(cMap[row][i]=='O') return false;
        if(cMap[row][i]=='X') break;
    }
    return true;
}

void solve(int k,int current)
{
    //����
    int x,y;
    //�жϵ�ͼ�Ƿ��������
    if(k==n*n){
        if(current>iBest){
            iBest=current;
            return;
        }
    }else{
        //��ͼ�����껯
        x=k/n;
        y=k%n;
        //������Էŵﱤ
        if(cMap[x][y]=='.'&&CanPut(x,y)){
            cMap[x][y]='O';
            solve(k+1,current+1);
            cMap[x][y]='.';
        }
        //������ܷ��õﱤ
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
