#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int s[1025], m[2048]={0};
    for (int i=0;i<n;i++) {
        scanf("%d", &s[i]);
        m[s[i]]=1;
    }
    for (int k=1;k<1024;k++) {
        int i;
        for (i=0;i<n;i++) {
            if (m[s[i]^k]==0) {
                break;
            }
        }
        if (i==n) {
            printf("%d\n",k);
            return 0;
        }
    }
    printf("-1\n");
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
