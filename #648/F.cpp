#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[500], b[500];
    vector<pair<int, int> > A, B;
    for (int i=0;i<n;i++)
        scanf("%d", &a[i]);
    for (int i=0;i<n;i++)
        scanf("%d", &b[i]);
    if (n%2==1 && a[n/2]!=b[n/2]) {
        printf("No\n");
        return 0;
    }
    for (int i=0;i<n/2;i++) {
        if (a[i]>a[n-i-1])
            swap(a[i], a[n-i-1]);
        pair<int, int> p = make_pair(a[i], a[n-i-1]);
        A.push_back(p);
    }
    for (int i=0;i<n/2;i++) {
        if (b[i]>b[n-i-1])
            swap(b[i], b[n-i-1]);
        pair<int, int> p = make_pair(b[i], b[n-i-1]);
        B.push_back(p);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i=0;i<n/2;i++) {
        if (A[i]!=B[i]) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
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
