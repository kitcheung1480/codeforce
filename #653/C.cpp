#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    char s[55];
    scanf("%d", &n);
    scanf(" %s", s);
    int  mn = 0, cur = 0;
    for (int i=0;i<n;i++) {
        if (s[i]==')')
            cur--;
        else
            cur++;
        mn = min(mn, cur);
    }
    printf("%d\n", -mn);
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
