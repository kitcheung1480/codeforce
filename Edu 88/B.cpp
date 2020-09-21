#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m, x, y;
    scanf("%d%d%d%d", &n, &m, &x, &y);
    y = min(x+x,y);
    char M[100][1005];
    for (int i=0;i<n;i++) {
        scanf(" %s", M[i]);
    }
    int c=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (j<m-1 && M[i][j]=='.' && M[i][j+1]=='.') {
                c += y;
                j++;
            }
            else if (M[i][j]=='.') {
                c += x;
            }
        }
    }
    printf("%d\n", c);
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
