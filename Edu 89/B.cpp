#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, x, m;
    scanf("%d%d%d", &n, &x, &m);
    int l=x, r=x;
    for (int i=0;i<m;i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a<=l && l<=b || a<=r && r<=b) {
            l=min(a,l);
            r=max(b,r);
        }
    }
    printf("%d\n", r-l+1);
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
