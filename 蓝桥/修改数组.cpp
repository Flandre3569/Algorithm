#include<bits/stdc++.h>
using namespace std;
const int MAXSIZE = 1000002;
int visit[MAXSIZE];

int main()
{
    int n;
    cin>>n;
    int num;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        while(visit[num]) { // �������������ˣ�����ѭ��
            int temp = num; // ��¼��ǰλ�õ�visit�����е�ԭ��
            num += visit[num]; // ���˵����ʴ���
            ++visit[temp];
        }
        visit[num] = 1;
        printf("%d ",num);
    }
}
