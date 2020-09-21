#include<bits/stdc++.h>
using namespace std;
int solve() {
    char s[200005];
    scanf(" %s", s);
    int m = 200005, len = strlen(s), a=0, b=0, cnt[3]={};
    while (b<=len) {
        while (cnt[0]&&cnt[1]&&cnt[2]) {
            if (b-a<m)
                m=b-a;
            cnt[s[a++]-'1']--;
        }
        cnt[s[b++]-'1']++;
    }
    if (m==200005)
        printf("0\n");
    else
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
