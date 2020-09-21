#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", ((k+n-2)/(n-1)-1)*n+(k-1)%(n-1)+1);
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
