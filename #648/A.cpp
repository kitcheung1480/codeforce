#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    int r=n ,c=m, a[100][100];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        int temp = 0;
        for (int j=0;j<m;j++) {
            if (a[i][j]==1) {
                temp = 1;
                break;
            }
        }
        if (temp ==1) {
            r--;
        }
    }
    for (int i=0;i<m;i++) {
        int temp = 0;
        for (int j=0;j<n;j++) {
            if (a[j][i]==1) {
                temp = 1;
                break;
            }
        }
        if (temp == 1) {
            c--;
        }
    }
    printf(min(r,c)%2==0?"Vivek\n":"Ashish\n");
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
