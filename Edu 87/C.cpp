#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979
int solve() {
    int n;
    scanf("%d", &n);
    printf("%.7f\n", 1.0/tan(pi/2/n));
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
