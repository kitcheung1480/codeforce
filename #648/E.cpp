#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    long long a[500];
    for (int i=0;i<n;i++) {
        scanf("%I64d", &a[i]);
    }
    long long ans = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                ans = max(ans, a[i] | a[j] | a[k] );
            }
        }
    }
    printf("%I64d\n", ans);
    return 0;
}
int main() {
    int t=1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
