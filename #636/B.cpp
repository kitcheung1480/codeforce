#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    if (n/2%2==1) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
        for (int i=1;i<=n/2;i++) {
            printf("%d ", 2*i);
        }
        for (int i=1;i<=n/2;i++) {
            printf("%d%c", i==n/2?2*i-1+n/2:2*i-1, i==n/2?'\n':' ');
        }
    }
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
