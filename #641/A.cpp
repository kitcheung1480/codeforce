#include<bits/stdc++.h>
using namespace std;
int f(int x) {
    for (int i=2;i<=sqrt(x);i++) {
        if (x%i==0)
            return i;
    }
    return x;
}
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", n+f(n)+(k-1)*2);
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
