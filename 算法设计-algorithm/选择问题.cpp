#include<bits/stdc++.h>
using namespace std;
#define NUM 1001
int a[NUM];

//起点、终点和第K小的元素
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
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<select(0,4,2);

}
