#include<bits/stdc++.h>
using namespace std;
int solve() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if (a==c&&b+d==a || a==d&&b+c==a || b==c&&a+d==b || b==d&&a+c==b)
        printf("YES\n");
    else printf("NO\n");
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
