#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[200005]={};
    int i,cnt=0, maximum, l;
    for (i=0;i<k;i++) {
        scanf("%d" ,&a[i]);
        if (i>1 && a[i]<a[i-1] &&a[i-1]>a[i-2]) {
            cnt++;
        }
    }
    maximum=cnt;
    l=1;
    for (i=k;i<n;i++) {
        if (a[i-k]<a[i-k+1] && a[i-k+1]>a[i-k+2])
            cnt--;
        scanf("%d", &a[i]);
        if (a[i]<a[i-1] && a[i-1]>a[i-2]) {
            cnt++;
        }
        if (cnt>maximum) {
            maximum=cnt;
            l=i-k+2;
        }
    }
    printf("%d %d\n", maximum+1, l);
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
