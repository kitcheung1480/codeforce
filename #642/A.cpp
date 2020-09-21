#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    if (n==1)
        printf("0\n");
    else if (n==2) {
        printf("%d\n", m);
    }
    else {
        printf("%d\n", 2*m);
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
