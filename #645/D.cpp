#include<bits/stdc++.h>
using namespace std;
long long tail(long long n, long long i) {
    return n*i+(i-i*i)/2;
}
long long full(long long n)
    return (n+n*n)/2;
}
int solve() {
    long long n, x;
    scanf("%I64d%I64d", &n, &x);
    long long d[200005], s[200005];
    for (int i=0;i<n;i++) {
        scanf("%I64d", &d[i]);
        s[i] = head(d[i]);
    }
    long long sum = 0, day = 0, m = 0, pt = n-1;
    while (day + d[(pt+n)%n]<=x) {
        sum += s[pt];
        day += d[pt];
        pt--;
    }
    sum += tail(d[pt], x-day);
    m = sum;
    while ((--pt+n)%n!=0) {
        sum -= s[(pt+n+1)%n];
        sum -= tail(d[pt+1], x-day);
        x += d[(pt+n+1)%n];
        while (day + d[(pt+n)%n]<=x) {
            sum += s[(pt+n)%n];
            day += d[(pt+n)%n];
        }
        sum += tail(d[(pt+n)%n], x-day);
    }
    return 0;
}
int main() {
    int t=1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
