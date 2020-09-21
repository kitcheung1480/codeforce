#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[200005], b[200005], c[200005], d[200005]={};
    for (int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        c[a[i]]=i;
    }
    for (int i=1;i<=n;i++) {
        scanf("%d", &b[i]);
        d[(c[b[i]]-i+n)%n]++;
    }
    int m = 0;
    for (int i=0;i<n;i++) {
        if (d[i]>m)
            m=d[i];
    }
    printf("%d\n", m);
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
