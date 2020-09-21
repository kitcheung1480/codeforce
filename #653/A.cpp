#include<bits/stdc++.h>
using namespace std;
int solve() {
    int x, y, n;
    scanf("%d%d%d", &x, &y, &n);
    printf("%d\n", n/x*x+y>n?n/x*x-x+y:n/x*x+y);
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
