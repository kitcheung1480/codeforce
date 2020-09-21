#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    int k[1005]={};
    for (int i=0;i<n;i++) {
        int a;
        scanf("%d", &a);
        k[a]=1;
    }
    for (int i=0;i<m;i++) {
        int b;
        scanf("%d", &b);
        if (k[b]==1)
            k[b]=2;
    }
    for (int i=0;i<1005;i++) {
        if (k[i]==2) {
            printf("YES\n1 %d\n", i);
            return 0;
        }
    }
    printf("NO\n");
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
