#include<bits/stdc++.h>
using namespace std;
//��ӡ��N��Ԫ�صļ���������������Ӽ�

void print_set(int n,int k){
    for(int i=0;i<(1<<n);i++){
        int num=0,kk=i;//����ͳ�Ƹ�����num��kk��������i
        while(kk){
            kk=kk&(kk-1);//���kk�����һ��i
            num++;//��¼����
        }
        if(num==k){//�������е�1��k������������
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
    cin>>n>>k;//Ԫ���ܸ���Ϊn���������Ϊk���Ӽ�������
    print_set(n,k);
}
