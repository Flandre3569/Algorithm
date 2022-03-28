#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=1e2+10;
const int maxm=1<<21;
int dp[maxm];
int val[maxx];
int n,m,k;

int main()
{
	scanf("%d%d%d",&n,&m,&k);
	memset(dp,-1,sizeof(dp));
	memset(val,0,sizeof(val));
	int x;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&x);
			x--;
			val[i]|=(1<<x);
		}
		dp[val[i]]=1;
	}
	int top=(1<<(m))-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=top;j++)
		{
			if(dp[j]==-1) continue;
			else if(dp[j|val[i]]==-1) dp[j|val[i]]=dp[j]+dp[val[i]];
			else dp[j|val[i]]=min(dp[j|val[i]],dp[j]+dp[val[i]]);
		}
	}
	printf("%d\n",dp[top]);
	return 0;
}
