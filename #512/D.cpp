#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,k;
    scanf("%I64d %I64d %I64d", &n, &m, &k);
    if (n*m*2%k!=0) {
            printf("NO\n");
            return 0;
    }
    printf("YES\n");
    if (k==2) printf("0 0\n%I64d 0\n0 %I64d\n",n,m);
    else if (n%k==0) printf("0 0\n%I64d %I64d\n%I64d %I64d\n",n/k*2,m,0,m);
    else if (m%k==0) printf("0 0\n%I64d %I64d\n%I64d %I64d\n",n,m/k*2,n,0);
    else if ((n*2)%k==0) printf("0 0\n%I64d %I64d\n%I64d %I64d\n",n*2/k,m,0,m);
    else if ((m*2)%k==0) printf("0 0\n%I64d %I64d\n%I64d %I64d\n",n,m*2/k,n,0);
    else if ((n*m)%k==0) printf("0 0\n%I64d %I64d\n%I64d %I64d\n",0,n*m/k,0,1);
    else if (k==(2*n*m)) printf("0 0\n%0 1\n%1 0\n");
    return 0;
}
