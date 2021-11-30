#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int x=a[i];
		for(int j=0;j<n;j++)
		{
			if(i!=j&&a[i]%a[j]!=a[i]&&a[i]%a[j]==0&&a[j]!=1)
			{
				x/=a[j];
				for(int k=j+1;k<n;k++)
				{
					if(x==a[k])
				{
					count++;
					x=a[i];
					break;
				}
				if(k==n-1)
				{
					x=a[i];
				}
				}

			}
		}
	}
	cout<<count;

}