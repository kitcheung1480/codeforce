#include<bits/stdc++.h>
using namespace std;
int solve() {
    char s[1005];
    scanf(" %s", s);
    int c0=0, c1=0, n = strlen(s);
    for (int i=0;i<n;i++) {
        if (s[i]=='0') c0++;
        else c1++;
    }
    int c00=0, c11=0, m = 1000;
    for (int i=0;i<n;i++) {
        if (s[i]=='0') c00++;
        else c11++;
        if (c00<c11) {
            m = min(m, c00+c1-c11);
        }
        else {
            m = min(m, c11+c0-c00);
        }
    }
    printf("%d\n", m);
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
