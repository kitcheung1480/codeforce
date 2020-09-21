#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, x;
    scanf("%d%d", &n, &x);
    int a, odd=0, even=0;
    for (int i=0;i<n;i++) {
        scanf("%d", &a);
        if (a%2==0)
            even++;
        else
            odd++;
    }
    x = max(1, (x-even)%2==0?x-even+(even>0):x-even);
    printf(odd>=x&&x%2==1?"YES\n":"NO\n");
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
