#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    int A[1005]={}, S[1005]={}, temp;
    for (int i=0;i<=n;i++)
        A[i]=0;
    for (int i=1;i<=k;i++) {
        int s;
        scanf("%d", &s);
        S[i] = s;
        for (int j=1;j<=s;j++) {
            scanf("%d", &temp);
            A[temp]=i;
        }
    }
    for (int i=1;i<=n;i++)
        if (A[i]==0)
            S[0]++;
    int head = 1, tail = n, m;
    printf("? %d", n);
    for (int i=1;i<=n;i++) printf(" %d", i);
    printf("\n");
    fflush(stdout);
    scanf("%d", &m);
    while (head<tail) {
        printf("? %d", (head+tail)/2-head+1);
        for (int i=head;i<=(head+tail)/2;i++) printf(" %d", i);
        printf("\n");
        fflush(stdout);
        int get;
        scanf("%d", &get);
        if (get == m) {
            tail = (head+tail)/2;
        }
        else {
            head = (head+tail+1)/2;
        }
    }
    int y=0;
    if (n-S[A[head]]>0) {
        printf("? %d", n-S[A[head]]);
        for (int i=1;i<=n;i++) {
            if (A[i]!=A[head]) printf(" %d", i);
        }
        printf("\n");
        fflush(stdout);
        scanf("%d", &y);
    }
    printf("!");
    for (int i=1;i<=k;i++) {
        printf(" %d", i==A[head]?y:m);
    }
    printf("\n");
    fflush(stdout);
    char good[100];
    scanf("%s", good);
    fflush(stdout);
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
