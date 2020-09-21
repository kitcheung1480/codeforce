#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[200005], b[200005]={};
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++) {
        if (++b[(i+a[i%n]%n+n)%n]==2) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
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
