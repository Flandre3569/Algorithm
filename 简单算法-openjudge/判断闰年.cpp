# include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%400==0&&n%3200!=0){
        cout<<'Y'<<endl;
    }
    else if(n%4==0&&n%100!=0)
    {
        cout<<'Y'<<endl;
    }
    else
    {
        cout<<'N'<<endl;
    }
    return 0;
}