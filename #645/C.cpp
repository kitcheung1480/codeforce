#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long x1,x2,y1,y2;
    scanf("%I64d%I64d%I64d%I64d", &x1, &y1, &x2, &y2);
    printf("%I64d\n", (x2-x1)*(y2-y1)+1);
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
