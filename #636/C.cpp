#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, a, sign, m;
    long long sum=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a);
        if (i==0) {
            sign = a>0?1:-1;
            m=a;
        }
        else {
            if (sign!=(a>0?1:-1)) {
                sum+=m;
                sign*=-1;
                m=a;
            }
            else {
                m=m>a?m:a;
            }
        }
    }
    sum+=m;
    printf("%I64d\n", sum);
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
