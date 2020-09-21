#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    set<int> s;
    for (int i=0;i<=1e6;i++)
        s.insert(i);
    int a[100000];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        s.erase(a[i]);
    }
    for (int p=0;p<n;p++) {
        if (p==0 || a[p]==a[p-1]) {
            printf("%d%c", *(s.begin()), p==n-1?'\n':' ');
            s.erase(s.begin());
        }
        else {
            s.insert(a[p-1]);
            printf("%d%c", *(s.begin()), p==n-1?'\n':' ');
            s.erase(s.begin());
        }
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
