#include<bits/stdc++.h>
using namespace std;

//��ӡ���е��Ӽ�
void print_subset(int n){
    for(int i=0;i<(1<<n);i++){
        //ÿ��i�Ķ���������Ӧһ���Ӽ���һ�δ�ӡһ���Ӽ������õ������Ӽ�
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
