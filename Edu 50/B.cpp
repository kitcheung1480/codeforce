#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    scanf("%d", &q);
    long long n, m, k;
    while (q-->0) {
        scanf("%I64d %I64d %I64d", &n, &m, &k);
        if (max(n,m)>k)
            printf("-1\n");
        else {
            if ((k-max(n,m))%2==1 && n%2==m%2)
                printf("%I64d\n", k-2);
            else if (n%2==m%2&&n%2==k%2)
                printf("%I64d\n", k);
            else
                printf("%I64d\n", k-1);
        }
    }
    return 0;
}
