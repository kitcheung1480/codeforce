#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[50], cnt[2] = {};
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i]%2!=i%2)
            cnt[a[i]%2]++;
    }
    printf("%d\n", cnt[0]==cnt[1]?cnt[0]:-1);
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
