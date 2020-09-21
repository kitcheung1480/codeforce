#include<bits/stdc++.h>
using namespace std;
int solve() {
    char s[1000005];
    scanf(" %s", s);
    int cnt = 0, m = 0, n = strlen(s);
    long long ans = 0;
    for (int i=0;i<n;i++) {
        if (s[i]=='-')
            cnt--;
        else
            cnt++;
        if (cnt < m) {
            ans+=i+1;
            m = cnt;
        }
    }
    printf("%I64d\n", ans + n);
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
