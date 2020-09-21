#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long n, sum=0;
    scanf("%I64d", &n);
    long long k=(n-1)/2;
    printf("%I64d\n", (k*(k+1)/2+k*(k+1)*(4*k-1)/6)*4);
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
