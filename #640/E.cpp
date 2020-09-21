#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, a[8005], mp[8005]={}, pre[80005]={};
    scanf("%d", &n);
    for (int i=0, sum=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
        pre[i]=sum;
        if (i>0&&pre[i]<=n) {
            mp[pre[i]]=1;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=i+2;j<n;j++) {
            if (pre[j]-pre[i]<=n)
                mp[pre[j]-pre[i]]=1;
        }
    }
    int cnt=0;
    for (int i=0;i<n;i++) {
        if (mp[a[i]]==1) {
            cnt++;
            //printf("cnt %d",a[i]);
        }
    }
    printf("%d\n", cnt);
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
