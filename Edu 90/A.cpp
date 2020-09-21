#include<bits/stdc++.h>
using namespace std;
int solve() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d %d\n", a>=c?-1:1, (long long)a*b>c?b:-1);
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
