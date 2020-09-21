#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long a, b, n, m;
    scanf("%I64d%I64d%I64d%I64d", &a, &b, &n, &m);
    if (min(a, b) < m || (a+b)<(n+m)) {
        printf("No\n");
    }
    else
        printf("Yes\n");
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
