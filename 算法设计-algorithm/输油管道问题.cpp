#include<bits/stdc++.h>
using namespace std;
# define NUM 1001
int a[NUM];

////�����㷨������λ��
//int main()
//{
//    int n;//�;�������
//    int x;//x���꣬��ȡ����
//    int a[1000];//y����
//    cin>>n;
//    for(int k=0;k<n;k++){
//        cin>>x>>a[k];
//    }
//    sort(a,a+n);//����������
//    //������;������ܵ�֮������͹ܵ���С���Ⱥ�
//    int min=0;
//    for(int i=0;i<n;i++){
//        min+=(int)fabs(a[i]-a[n/2]);
//    }
//    cout<<min<<endl;
//
//}
   //���η�������λ��
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
    int n;//�;�������
    int x;//x����,��ȡ����
    int b[1000];//y����
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>b[i];
    }
    //��ȡ��λ��������select����
    int y=select(0,n-1,n/2);
    //��������͹ܵ������ܵ�����С����
    int min=0;
    for(int i=0;i<n;i++){
        min+=(int)fabs(b[i]-b[y]);
    }
    cout<<min<<endl;
}
