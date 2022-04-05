#include<bits/stdc++.h>
using namespace std;

vector<int> child[100005];
bool f[100005];
int ans[100005];

int dfs(int r)
{
    int res = 0;
    for(int i = 0; i < child[r].size(); i++) {
        res += dfs(child[r][i]);
    }
    ans[r] = res;
    return res + 1;
}

int main()
{
    int n, x, y, r;
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d%d", &x, &y);
        child[x].push_back(y);
        f[y] == true;
    }
    for(int i = 1; i <= n; i++) {
        if(!f[i]) {
            r = i;
            break;
        }
    }
    dfs(r);
    for(int i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
