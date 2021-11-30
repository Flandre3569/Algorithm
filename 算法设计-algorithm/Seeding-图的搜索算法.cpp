#include<bits/stdc++.h>
using namespace std;
#define NUM 10
char field[NUM][NUM];//���
int n,m;//��صĴ�С
int visited;//��������з��������
int flag;//ȫ��������ϵı�־
int counter;//�ݹ�Ĵ�������

//�β��Ƿ��������
void dfs(int x,int y)
{
    //����ı߽��ж�
    if(x<0||y<0||x>=n||y>=m)
        return;
    //��������ʯͷ
    if(field[x][y]=='S')
        return;
    //�Ѿ�ȫ���������
    if(flag)
        return;
    //�ݹ�Ĵ������������Ʋ�Ҫ����1500��
    counter++;
    if(counter>1500)
        return;
    //������������Ϊʯͷ�������ظ�����
    field[x][y]='S';
    //���ʵķ������
    visited++;
    //ȫ������������
    if(visited==n*m)
    {
        flag=1;
        return;
    }
    //�ֱ���4���ٽ�������
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    //�ָ��ݹ��ֳ�
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
        for(i=0; i<n; i++)		//�����ַ������룬ʡʱ
            scanf("%s",&field[i]);
        for(i=0; i<n; i++)		//�ҳ���ʯ������
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


