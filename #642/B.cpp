#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n ,&k);
    int a[100], b[100];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    reverse(b, b+n);
    int pt1=0, pt2=0;
    for (int i=0;i<n;i++) {
        if (k>0) {
            if (a[i]<b[i]) {
                k--;
                a[i]=b[i];
            }
        }
    }
    printf("%d\n", accumulate(a, a+n, 0));
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
