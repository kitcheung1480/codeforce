#include<bits/stdc++.h>
using namespace std;
int sign(int a) {
    return a>0?1:-1;
}
int solve() {
    int n;
    scanf("%d", &n);
    int p[100000];
    for (int i=0;i<n;i++) {
        scanf("%d", &p[i]);
    }
    vector<int> v;
    int c=2;
    v.push_back(p[0]);
    for (int i=1;i<n-1;i++) {
        if (sign(p[i]-p[i-1])*sign(p[i]-p[i+1])>0) {
            c++;
            v.push_back(p[i]);
        }
    }
    v.push_back(p[n-1]);
    printf("%d\n", c);
    for (int i=0;i<c;i++) {
        printf("%d%c", v[i], i==c-1?'\n':' ');
    }
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
