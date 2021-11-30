#include<bits/stdc++.h>
using namespace std;
char room[23][23];
int dir[4][2]={
    {-1,0},    //�������Ͻǵ������ǣ�0,0��
    {0,-1},    //����
    {1,0},     //����
    {0,1}      //����
};

int Wx,Hy,num;  //Wx�У�Hy�У���numͳ�ƿ��ߵ�λ���ж���
#define CHECK(x,y)(x<Wx&&x>=0&&y>=0&&y<Hy) //�Ƿ���room��

struct node{
    int x,y;
};

void DFS(int dx,int dy)
{
    room[dx][dy]='#';
    num++;

    for(int i=0;i<4;i++){
        int newx=dx+dir[i][0];
        int newy=dy+dir[i][1];
        if(CHECK(newx,newy)&&room[newx][newy]=='.'){
            DFS(newx,newy);
            cout<<"  back:"<<'('<<dx<<','<<dy<<')'<<endl;
        }
    }
}

int main(){
    int x,y,dx,dy;
    while(cin>>Wx>>Hy){        //Wx�У�Hy��
        if(Wx==0&&Hy==0) break; //������־
        for(y=0;y<Hy;y++){      //��Hy��
            for(x=0;x<Wx;x++){  //һ�ζ���һ��
                cin>>room[x][y];
                if(room[x][y]=='@'){
                    dx=x;
                    dy=y;
                }
            }
        }
        num=0;
        DFS(dx,dy);
        cout<<num<<endl;
    }
return 0;


}

