#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int k;
    cin>>a>>k;
    //���k>=n,���ֱ�ɾ����
    if(k>=a.size())
        a.erase();
    else while(k>0)
    {
        //Ѱ������½���
        int i;
        for(i=0;(i<a.size()-1)&&(a[i]<=a[i+1]);++i);
        a.erase(i,1);
        k--;
    }

    //ɾ��ǰ������0
    while(a.size()>1&&a[0]=='0')
        a.erase(0,1);
    cout<<a<<endl;
}
