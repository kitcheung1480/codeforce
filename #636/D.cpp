#include<bits/stdc++.h>
using namespace std;
int a[200005], m[400005];
int solve() {
    int n, k, cnt=0;
    scanf("%d%d", &n, &k);
    int pre=0;
    for (int i=0;i<n;i++)
        scanf("%d", &a[i]);
    memset(m,0,sizeof(m));
    for (int i=0;i<n/2;i++) {
        m[a[i]+a[n-i-1]-max(a[i],a[n-i-1])+1]++;
        m[a[i]+a[n-i-1]-min(a[i],a[n-i-1])+k+1]--;
        m[a[i]+a[n-i-1]]++;
        m[a[i]+a[n-i-1]+1]--;
    }
    int mx=0;
    for (int i=2;i<=k*2;i++) {
        pre+=m[i];
        if (pre>mx)
            mx=pre;
    }
    printf("%d\n", n-mx);
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
