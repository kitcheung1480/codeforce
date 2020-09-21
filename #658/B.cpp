#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[100005], x=0, y=0, z=0;
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i]==1)
            z++;
        if (a[i]==1 && y==0)
            x++;
        else y=1;
    }
    if (z==n && n%2==0 || z!=n && x%2==1)
        printf("Second\n");
    else
        printf("First\n");
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
