#include<bits/stdc++.h>
using namespace std;
int ab[40005];
long long f(int a,int b,long long d) {
    long long answer=0;
    for (int i=1;i<=a*b;i++) {
        answer+=ab[i];
    }
    answer*=d/a/b;
    for (int i=1;i<=d%(a*b);i++) {
        answer+=ab[i];
    }
    return answer;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t-->0) {
        int a,b,q;
        memset(ab, 0, sizeof(ab));
        scanf("%d %d %d", &a, &b, &q);
        for (int i=1;i<=a*b;i++) {
            if (i%a%b==i%b%a) {
                ab[i]=1;
            }
        }
        while (q--) {
            long long l, r;
            scanf("%I64d %I64d", &l, &r);
            printf("%I64d%c", r-(l-1)-(f(a,b,r)-f(a,b,l-1)), q<0?'\n':' ');
        }
    }
    return 0;
}
