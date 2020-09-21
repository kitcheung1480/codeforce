#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d" ,&n);
    int a[500];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int b[500], same = 1;
    for (int i=0;i<n;i++) {
        scanf("%d", &b[i]);
        if (b[i]!=b[0])
            same = 0;
    }
    if (!same) {
        printf("Yes\n");
        return 0;
    }
    for (int i=0;i<n-1;i++) {
        if (a[i]>a[i+1]) {
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
