#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", (n*m+1)/2);
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
