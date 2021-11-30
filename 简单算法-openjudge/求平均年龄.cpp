# include <iostream>
using namespace std;
# include <iomanip>

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int m;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        sum=sum+m;
    }

    cout<<fixed<<setprecision(2)<<(sum/(n*1.0))<<endl;

    return 0;
}