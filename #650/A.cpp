#include<bits/stdc++.h>
using namespace std;
int solve() {
    char b[105];
    scanf(" %s", b);
    int n = strlen(b);
    printf("%c", b[0]);
    for (int i=1;i<n-1;i+=2) {
        printf("%c", b[i]);
    }
    printf("%c\n", b[n-1]);
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
