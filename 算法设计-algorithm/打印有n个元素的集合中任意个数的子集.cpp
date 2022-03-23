#include<bits/stdc++.h>
using namespace std;
//打印有N个元素的集合中任意个数的子集

void print_set(int n,int k){
    for(int i=0;i<(1<<n);i++){
        int num=0,kk=i;//设置统计个数的num，kk用来处理i
        while(kk){
            kk=kk&(kk-1);//清除kk的最后一个i
            num++;//记录数量
        }
        if(num==k){//二进制中的1有k个，符合条件
            for(int j=0;j<n;j++)
                if(i&(1<<j)){
                    cout<<j<<" ";
                }
                cout<<endl;
        }
    }


}

int main(){
    int n,k;
    cin>>n>>k;//元素总个数为n个，求个数为k的子集的数量
    print_set(n,k);
}
