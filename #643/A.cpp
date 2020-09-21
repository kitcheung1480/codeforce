#include<bits/stdc++.h>
using namespace std;
int maxDigit(long long v) {
    char s[20];
    sprintf(s, "%I64d", v);
    int len=strlen(s), m=0;
    for (int i=0;i<len;i++) {
        if (s[i]-'0'>m) {
            m=s[i]-'0';
        }
    }
    return m;
}
int minDigit(long long v) {
    char s[20];
    sprintf(s, "%I64d", v);
    int len=strlen(s), m=9;
    for (int i=0;i<len;i++) {
        if (s[i]-'0'<m) {
            m=s[i]-'0';
        }
    }
    return m;
}
int solve() {
    long long a, k;
    scanf("%I64d%I64d", &a, &k);
    while (minDigit(a)!=0&&(--k>0)) {
        a+=minDigit(a)*maxDigit(a);
    }
    printf("%I64d\n", a);
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
