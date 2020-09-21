#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    for (int i=2;i<64;i++) {
        if (n%((1<<i)-1)==0) {
            printf("%d\n", n/((1<<i)-1));
            return 0;
        }
    }
    printf("-1\n");
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
