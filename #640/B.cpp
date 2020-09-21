#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    if (n%2==1) {
        if (k%2==1) {
            if (n>=k) {
                printf("YES\n");
                printf("%d%c", n-k+1, k==1?'\n':' ');
                for (int i=0;i<k-1;i++) {
                    printf("%d%c", 1, i==k-2?'\n':' ');
                }
            }
            else {
                printf("NO\n");
            }
        }
        else {
            printf("NO\n");
        }
    }
    else {
        if (k%2==1) {
            if (n>=2*k) {
                printf("YES\n");
                printf("%d%c", n-2*k+2, k==1?'\n':' ');
                for (int i=0;i<k-1;i++) {
                    printf("%d%c", 2, i==k-2?'\n':' ');
                }
            }
            else {
                printf("NO\n");
            }
        }
        else {
            if (n>=k) {
                printf("YES\n");
                printf("%d%c", n-k+1, k==1?'\n':' ');
                for (int i=0;i<k-1;i++) {
                    printf("%d%c", 1, i==k-2?'\n':' ');
                }
            }
            else{
                printf("NO\n");
            }
        }
    }
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
