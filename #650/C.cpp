#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    char s[200005];
    scanf(" %s", s);
    int cnt = 0, c = 0, flag = 0;
    if (s[0]=='0')
        cnt = k;
    for (int i=0;i<n;i++) {
        if (s[i]=='1') {
            flag = 1;
            c += (cnt-k)/(k+1);
            cnt = 0;
        }
        else
            cnt++;
    }
    if (s[n-1]=='0')
        cnt += k;
    c += (cnt-k)/(k+1);
    printf("%d\n", c);
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
