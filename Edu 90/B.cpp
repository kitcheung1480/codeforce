#include<bits/stdc++.h>
using namespace std;
int solve() {
    char s[105];
    scanf(" %s", s);
    int c[2]={}, n = strlen(s);
    for (int i=0;i<n;i++) {
        c[s[i]-'0']++;
    }
    printf(min(c[0],c[1])&1?"DA\n":"NET\n");
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
