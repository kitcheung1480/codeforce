#include<bits/stdc++.h>
using namespace std;
int n, k, a[200005];
int solve() {
    scanf("%d%d", &n, &k);
    map<int,int> m;
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i]%k==0)
            continue;
        a[i]=k-a[i]%k;
        m[a[i]]++;
    }
    int mx = 0, v = 0;
    for (map<int, int>::iterator it = m.begin();it!=m.end();it++)
        if (it->second > mx || it->second==mx && it->first > v) {
            mx = it->second;
            v = it->first;
        }
    printf("%I64d\n", max(0,mx-1)*(long long)k+v+!m.empty());
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
