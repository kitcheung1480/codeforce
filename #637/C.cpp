#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d" ,&n);
    int p[100005], m=n, pt=0, f=0;
    for (int i=0;i<n;i++) {
        scanf("%d", &p[i]);
    }
    for (int i=0;i<n;i++) {
        if (p[i]==m) {
            m=p[pt]-1;
            pt=i+1;
        }
        else if (p[i]+1!=p[i+1]) {
            f=1;
        }
    }
    if (f==1) printf("NO\n");
    else printf("YES\n");
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
