#include<bits/stdc++.h>
using namespace std;
int solve() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a==1||b==1||(a==2&b==2)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
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
