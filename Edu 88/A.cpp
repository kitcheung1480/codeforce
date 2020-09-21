#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    printf("%d\n", min(m, n/k)-(m-min(m, n/k)+k-2)/(k-1));
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
