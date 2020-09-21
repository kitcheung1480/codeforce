#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long a[30005], b[30005];
    long long sum_a=0, sum_b=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum_a+=a[i];
    }
    scanf("%d", &m);
    for (int i=0;i<m;i++) {
        scanf("%d", &b[i]);
        sum_b+=b[i];
    }
    if (sum_a!=sum_b) {
        printf("-1\n");
        return 0;
    }
    int i=0, j=0, k=0;
    while (i<n&&j<m) {
        if (sum_a==sum_b) {
            k++;
            sum_a-=a[i++];
            sum_b-=b[j++];
            //printf("%d %d %d\n", i, j, k);
        }
        else if (sum_a>sum_b) {
            sum_a-=a[i++];
            //printf("A: %I64d(%d)>%I64d(%d)\n", sum_a,i,sum_b,j);
        }
        else {
            sum_b-=b[j++];
            //printf("B: %I64d(%d)<%I64d(%d)\n", sum_a,i,sum_b,j);
        }
    }
    printf("%d\n", k);
    return 0;
}
