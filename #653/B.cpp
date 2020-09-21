#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int cnt=0, cnt2=0;
    while (n%3==0) {
        n/=3;
        cnt++;
    }
    while (n%2==0) {
        n/=2;
        cnt2++;
    }
    if (n!=1 || cnt2 > cnt) {
        printf("-1\n");
        return 0;
    }
    printf("%d\n", cnt + cnt - cnt2);
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
