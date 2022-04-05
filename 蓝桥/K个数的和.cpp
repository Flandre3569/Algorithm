#include<bits/stdc++.h>
using namespace std;
int n, k, sum, ans = 0;
int a[10000];
void dfs(int i, int cnt, int s)
{
    if(i == n) {
        if(cnt == k && s == sum) {
            ans++;
        }
        return;
    }
    dfs(i + 1, cnt, s);
    dfs(i + 1, cnt + 1, s + a[i]);
}

int main()
{
    cin >> n >> k >> sum;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ans = 0;
    dfs(0, 0, 0);
    cout << ans;

    return 0;
}
