#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, a[200005];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &a[i]);
    sort(a,a+n);
    int i;
    for (i=n-1;i>=0;i--) {
        if (i+1>=a[i]) {
            break;
        }
    }
    printf("%d\n", i+2);
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
