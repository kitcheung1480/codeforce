#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (a>b) swap(a,b);
    while (b%a!=0) {
        b%=a;
        swap(a,b);
    }
    return a;
}
int solve() {
    int n;
    scanf("%d", &n);
    int a, g=1;
    scanf("%d", &g);
    for (int i=0;i<n;i++) {

    }
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
