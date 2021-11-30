#include<bits/stdc++.h>
using namespace std;
//整数因子分解
int total;
void solve(int n)
{
    if(n==1) total++;
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0) solve(n/i);
        }
    }
}

int main()
{
    int n;
    while(cin>>n){
        total=0;
        solve(n);
        cout<<total<<endl;
    }

}
