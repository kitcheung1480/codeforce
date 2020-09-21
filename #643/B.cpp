#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, e[200005];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &e[i]);
    }
    sort(e,e+n);
    int cnt=0, i=0;
    int last[200005];
    while (i<n) {
        int j=0;
        while (i+j<n&&j+1<e[i+j])
            j++;
        if (i+j==n) {
            while (e[i+j]>j+1) {
                j+=last[--cnt];
            }
            i=n;
        }
        else {
            last[cnt++]=e[i+j];
            i=i+j+1;
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
