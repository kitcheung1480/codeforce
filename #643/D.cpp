#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, s;
    scanf("%d%d", &n, &s);
    if (s<2*n) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
        for (int i=0;i<n-1;i++) {
            printf("1 ");
        }
        printf("%d\n", s-n+1);
        printf("%d\n", n);
    }
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
