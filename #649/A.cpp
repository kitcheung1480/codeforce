#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, x;
    scanf("%d%d", &n, &x);
    int a[100000], div=0, sum = 0;
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i]%x!=0)
            div++;
        sum+=a[i];
    }
    if (div==0) {
        printf("-1\n");
        return 0;
    }
    int first = 0;
    while (a[first]%x==0 && first<n) {
        first++;
    }
    int last = n-1;
    while (a[last]%x==0 && last >= 0) {
        last--;
    }
    if (sum%x==0) {
        printf("%d\n", max(n-first-1, last));
        return 0;
    }
    printf("%d\n", n);
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
