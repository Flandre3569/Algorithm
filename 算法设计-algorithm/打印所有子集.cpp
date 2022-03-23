#include<bits/stdc++.h>
using namespace std;

//打印所有的子集
void print_subset(int n){
    for(int i=0;i<(1<<n);i++){
        //每个i的二进制数对应一个子集，一次打印一个子集，最后得到所有子集
        for(int j=0;j<n;j++){
            if(i&1<<j)
                cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print_subset(n);
}
