#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    int M[31][31];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &M[i][j]);
        }
    }
    int ans = 0;
    for (int i=0;i<(n+m-1)/2;i++) {
        int cnt[2]={};
        for (int j=0;j<=min(i,n-1);j++) {
            if (i-j<m) {
                cnt[M[j][i-j]]++;
                cnt[M[n-j-1][m-(i-j)-1]]++;
            }
        }
        ans += min(cnt[0],cnt[1]);
    }
    printf("%d\n", ans);
    return 0;
}
int main() {
    int t=1;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
