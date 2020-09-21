#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long n, sum = 0, add = 1;
    scanf("%I64d", &n);
    while (n) {
        if (n%2==1) {
            sum += add*2 - 1;
        }
        add*=2;
        n/=2;
    }
    printf("%I64d\n", sum);
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
