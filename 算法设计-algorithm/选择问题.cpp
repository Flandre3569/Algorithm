#include<bits/stdc++.h>
using namespace std;
#define NUM 1001
int a[NUM];

//��㡢�յ�͵�KС��Ԫ��
int select(int left,int right,int k)
{
    if(left>=right)return a[left];
    int i=left;
    int j=right+1;

    //���������Ϊ�ֽ�����
    int pivot=a[left];

    //����pivot��ߵı�pivot���Ԫ�غ���pivot�ұߵı���С�Ľ��н���
    while(true){
        do{
            i=i+1;
        }while(a[i]<pivot);

        do{
            j=j-1;
        }while(a[j]>pivot);
        if(i>=j) break;
        swap(a[i],a[j]);
    }
    //���ҵ���k���Ԫ��
    if(j-left+1==k){
        return pivot;
    }
    a[left]=a[i];
    a[j]=pivot;
    if(j-left+1<k)
        return select(j+1,right,k-j+left-1);
    else
        return select(left,j-1,k);
}

int main()
{
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<select(0,4,2);

}
