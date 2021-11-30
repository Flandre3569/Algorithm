#include <iostream>
using namespace std;

int main()
{
	int m,k;
	cin>>m>>k;
	int x;
	int n=0;
	if(m%19==0)
    {
        while(m>1&&m<100000){
            x=m%10;
            if(x==3){
                n=n+3;
            }
            m=m/10;
        }
        if(n==(3*k)){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;


	return 0;
}