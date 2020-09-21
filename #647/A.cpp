#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long a, b;
    scanf("%I64d%I64d", &a, &b);
    if (a>b) {
        swap(a,b);
    }
    long long cnt = 0;
    while (a<<3 <= b) {
        cnt++;
        a<<=3;
    }
    while (a<<2 <= b) {
        cnt++;
        a<<=2;
    }
    while (a<<1 <= b) {
        cnt++;
        a<<=1;
    }
    if (a==b) {
        printf("%I64d\n", cnt);
    }
    else printf("-1\n");
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
