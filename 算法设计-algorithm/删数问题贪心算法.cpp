#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int k;
    cin>>a>>k;
    //如果k>=n,数字被删完了
    if(k>=a.size())
        a.erase();
    else while(k>0)
    {
        //寻找最近下降点
        int i;
        for(i=0;(i<a.size()-1)&&(a[i]<=a[i+1]);++i);
        a.erase(i,1);
        k--;
    }

    //删除前导数字0
    while(a.size()>1&&a[0]=='0')
        a.erase(0,1);
    cout<<a<<endl;
}
