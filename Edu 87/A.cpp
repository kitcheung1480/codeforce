#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long a, b, c, d;
    scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d);
    if (a>b&&c<=d) {
        printf("-1\n");
    }
    else if (a<=b) {
        printf("%I64d\n", b);
    }
    else {
        printf("%I64d\n", b+((a-b)+(c-d)-1)/(c-d)*c);
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
