#include<bits/stdc++.h>
using namespace std;
int n,m;
long long sum=0;
int a[300000];
int main()
{
    cin>>n>>m;
    int z=n+m+1;

    for(int i=1;i<=z;i++)
    {
        cin>>a[i];
    }

    sort(a+1,a+z+1);
    if(m==0)
    {
        for(int i=1;i<=z;i++)
        {
            sum+=a[i];
        }
    }
    else
    {
        sum=a[z]-a[1];
        for(int i=2;i<z;i++)
        {

            sum+=abs(a[i]);
        }
    }
    cout<<sum;
    return 0;
}