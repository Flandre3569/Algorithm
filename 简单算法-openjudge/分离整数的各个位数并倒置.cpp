#include<iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	int num;
	while(i>0)
    {
        num=i%10;
        cout<<num<<" ";
        i=i/10;

    }

	return 0;
}