#include<bits/stdc++.h>
using namespace std;
int num[1005];
int dfs(int n, int k, int cnt) {
    if (cnt==n) return 1;
    if (k<1||k>n) return 0;
    if (num[k]==1) return 0;
    num[k]=1;
    if (dfs(n, k-2, cnt+1)||dfs(n, k-3, cnt+1)||dfs(n, k-4, cnt+1)||dfs(n, k+2, cnt+1)||dfs(n, k+3, cnt+1)||dfs(n, k+4, cnt+1)) {
        printf("%d%c", k, cnt==0?'\n':' ');
        return 1;
    }
    num[k]=0;
    return 0;
}
int solve() {
    int n;
    scanf("%d", &n);
    memset(num, 0, sizeof(num));
    for (int i=1;i<=n;i++) {
        if (dfs(n,i,0)==1)
            return 0;
    }
    printf("-1\n");
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
