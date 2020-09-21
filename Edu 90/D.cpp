#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, a[200005];
    long long ans = 0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (i%2==0) {
            ans+=a[i];
        }
    }
    long long cur = 0, m = 0;
    for (int i=1;i<n;i+=2) {
        cur += a[i]-a[i-1];
        if (cur < 0) {
            cur = 0;
        }
        else if (cur > m){
            m =  cur;
        }
    }
    cur = 0;
    for (int i=2;i<n;i+=2) {
        cur -= a[i]-a[i-1];
        if (cur < 0) {
            cur = 0;
        }
        else if (cur > m){
            m =  cur;
        }
    }
    printf("%I64d\n", ans+m);
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
