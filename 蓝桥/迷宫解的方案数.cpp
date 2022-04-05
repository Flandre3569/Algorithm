#include<bits/stdc++.h>
using namespace std;
char mp[15][15];
bool vis[15][15];
int n, m, ans = 0;

void dfs(int x, int y){

    if(mp[x][y] == '#' || x >= n || x < 0 || vis[x][y] || y >= m || y < 0) {
        return;
    }
    if(mp[x][y] == 'e') {
        ans++;
        return;
    }
    vis[x][y] = true;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
    vis[x][y] = false;
}
int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%s", mp[i]);
    }

    int x, y;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mp[i][j] == 's') {
                x = i;
                y = j;
            }
        }
    }

    dfs(x, y);
    cout << ans;

    return 0;
}
