#include<bits/stdc++.h>
using namespace std;

char mp[105][105];
int dir[8][2] = {{2, -1}, {2, 1}, {-2, 1}, {-2, -1}, {1, -2}, {1, 2}, {-1, 2}, {-1, -2} };
int m, n;
void dfs(int x, int y, int step)
{
    if(step > 3) {
        return;
    }
    if(x < 0 || x >= m || y < 0 || y >= n) {
        return;
    }
    mp[x][y] = '#';
    for(int i = 0; i < 8; i++) {
        dfs(x + dir[i][0], y + dir[i][1], step + 1);
    }
}

int main()
{
    int x, y;
    scanf("%d%d%d%d", &m, &n, &x, &y);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            mp[i][j] = '.';
        }
    }

    dfs(x - 1, y - 1, 0);
    for(int i = 0; i < m; i++) {
            printf("%s\n", mp[i]);
    }
    return 0;
}
