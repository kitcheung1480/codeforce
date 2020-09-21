#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n[3];
    for (int i=0;i<3;i++)
        scanf("%d", &n[i]);
    for (int i=0;n[0]>0&&i<=n[0];i++) {
        printf("0");
    }
    for (int i=0;n[2]>0&&i<=n[2];i++) {
        printf("1");
    }
    int b=(n[2]>0?0:n[0]>0?1:0);
    for (int i=0;n[1]>0 && i<=(n[1]-(n[0]>0||n[2]>0)-(n[0]>0&&n[2]>0));i++) {
        printf("%d",b++);
        b%=2;
    }
    printf("\n");
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
