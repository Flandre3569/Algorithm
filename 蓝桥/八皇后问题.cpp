#include<bits/stdc++.h>
using namespace std;

bool col[10], x[20], y[20];
int ans = 0;

bool check(int r, int i)
{
    return !col[i] && !x[r + i] && ! y[r - i + 8];
}
void dfs(int r)
{
    if(r == 8) {
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++) {
        if(check(r, i)) {
            col[i] = x[r + i] = y[r - i + 8] = true;
            dfs(r + 1);
            col[i] = x[r + i] = y[r - i + 8] = false;
        }
    }
}

int main()
{

    dfs(0);
    cout << ans << endl;
    return 0;
}
