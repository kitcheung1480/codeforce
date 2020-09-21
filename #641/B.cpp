#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, s[100005], dp[100005];
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d", &s[i]);
        dp[i]=1;
    }
    for (int i=1;i<=n;i++) {
        for (int j=i+i;j<=n;j+=i) {
            if (s[i]<s[j]) {
                dp[j]=max(dp[j],dp[i]+1);
            }
        }
    }
    printf("%d\n", *max_element(dp+1,dp+n+1));
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
