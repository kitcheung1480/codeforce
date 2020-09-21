#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    char s[2005];
    scanf(" %s", s);
    int cnt[26]={};
    for (int i=0;i<n;i++)
        cnt[s[i]-'a']++;
    sort(cnt, cnt+26);
    int pt = 0;
    while (cnt[pt]==0)
        pt++;
    for (int i=1;i<=26-pt;i++) {
        int div = i;
        while (k%div!=0) {
            div--;
        }

    }
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
