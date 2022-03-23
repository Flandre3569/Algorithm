#include<bits/stdc++.h>
using namespace std;
# define NUM 1001
int a[NUM];

////排序算法计算中位数
//int main()
//{
//    int n;//油井的数量
//    int x;//x坐标，读取后丢弃
//    int a[1000];//y坐标
//    cin>>n;
//    for(int k=0;k<n;k++){
//        cin>>x>>a[k];
//    }
//    sort(a,a+n);//按升序排序
//    //计算各油井到主管道之间的输油管道最小长度和
//    int min=0;
//    for(int i=0;i<n;i++){
//        min+=(int)fabs(a[i]-a[n/2]);
//    }
//    cout<<min<<endl;
//
//}
   //分治法计算中位数
int select(int left,int right,int k)
{
    if(left>=right)return a[left];
    int i=left;
    int j=right+1;

    //把最左边作为分界数据
    int pivot=a[left];

    //把在pivot左边的比pivot大的元素和在pivot右边的比他小的进行交换
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
    //查找到第k大的元素
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
    int n;//油井的数量
    int x;//x坐标,读取后丢弃
    int b[1000];//y坐标
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>b[i];
    }
    //获取中位数，利用select方法
    int y=select(0,n-1,n/2);
    //计算各输油管道到主管道的最小长度
    int min=0;
    for(int i=0;i<n;i++){
        min+=(int)fabs(b[i]-b[y]);
    }
    cout<<min<<endl;
}
