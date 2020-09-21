#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[200005];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int L = 1, R = 1e9;
    while (L<R) {
        int M = (L+R)/2;
        int cnt[2] = {}, mx[2]={};
        for (int i=0, last = 0;i<n;i++) {
            if (last == 0 && a[i]>M)
                continue;
            last = (last+1)%2;
            cnt[0]++;
        }
        for (int i=0, last = 0;i<n;i++) {
            if (last == 1 && a[i]>M)
                continue;
            last = (last+1)%2;
            cnt[1]++;
        }
        if (max(cnt[0],cnt[1])>=k) {
            R = (L+R)/2;
        }
        else {
            L = (L+R+1)/2;
        }
    }
    printf("%d\n", L);
    return 0;
}
int main() {
    int t=1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
