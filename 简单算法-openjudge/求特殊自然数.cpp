#include<iostream>
using namespace std;

int main()
{
	for(int i=81;i<=342;i++)
	{
		if(i%9==i/49&&i/9%9==i/7%7&&i/81==i%7)
		{
			cout<<i<<endl;
			cout<<i/49<<i/7%7<<i%7<<endl;
			cout<<i/81<<i/9%9<<i%9<<endl;
			break;
		}
	}

	return 0;
}