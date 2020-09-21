#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    int avg = k/n;
    int cnt = k-avg*n;
    printf("%d\n", k%n==0?0:2);
    int A[300][300];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if ((i-j+n)%n<avg)
                A[i][j]=1;
            else if ((i-j+n)%n==avg && cnt>0) {
                A[i][j]=1;
                cnt--;
            }
            else
                A[i][j]=0;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d", A[i][j]);
        }
        printf("\n");
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
