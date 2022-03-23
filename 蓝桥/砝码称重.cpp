#include <bits/stdc++.h>
using namespace std;
const long long inf = 0x7fffffffffffffff;
bool dp[106][200006];
int a[106];
int main()
{
    int i,j,n,sum = 0;
    cin>>n;
    for(i = 1;i <= n;i++){
        cin>>a[i];
        sum += a[i];
    }

   for(i = 1;i <= n;i++){
       for(j = 1;j <= sum;j++){
           dp[i][j] = dp[i-1][j];
           if(!dp[i][j]){
               if(j == a[i]) dp[i][j] = 1;
               if(dp[i-1][j + a[i]])  dp[i][j] = 1;
               if(dp[i-1][abs(j-a[i])]) dp[i][j] = 1;
           }
       }
   }

    long long ans = 0;
    for(j = 1;j <= sum;j++) if(dp[n][j]) ans++;
    cout<<ans;
    return 0;
}

