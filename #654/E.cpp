#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, p;
    scanf("%d%d", &n, &p);
    int a[200005], cnt[200005]={}, pre[200005]={};
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int mn = a[0], mx = a[0];
    for (int i=1;i<n;i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    for (int i=mn;i<=mx;i++) {
        int c = i;
        for (int j=i;j<=c;c+=cnt[j],j++);
        pre[i]=c - i;
    }
    /*
    for (int i=mx;i>=mn;i--) {
        if (cnt[i]>0) {
            pre[i] = pre[i+1] + cnt[i];
        }
    }*/
    vector<int> v;
    for (int i=mn, val=0; val+cnt[i]<p; val+=cnt[i], i++) {
        if (pre[i]>0)
            v.push_back(i);
    }
    printf("%d\n", v.size());
    for (int i=0;i<v.size();i++)
        printf("%d%c", v[i], i+1==v.size()?'\n':' ');
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
