#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, r;
    scanf("%d%d", &n, &r);
    if (r<n)
        printf("%I64d\n", ((long long)(r+1) * r)/2);
    else
        printf("%I64d\n", ((long long)(n+1) * n)/2 -n +1);
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
