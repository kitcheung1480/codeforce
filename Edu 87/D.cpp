#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979
int solve() {
    int n;
    scanf("%d", &n);
    double d= (2.0*sqrt(0.5/(1.0-cos(pi/n))));
    printf("%.7f\n", d*sin((pi-pi/n)/2.0+pi/n/4.0));
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
