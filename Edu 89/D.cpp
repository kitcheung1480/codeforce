#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5;
int spf[MAXN];
void sieve() {
    for (int i=2;)
    for (int i=4; i<MAXN; i+=2) {
        int j=i;
        while (j>0) {
            if (j%2==1) {
                spf[i]=j;
                break;
            }
            j/=2;
        }
    }
    for (int i=3; i*i<MAXN; i++) {
        if (spf[i] == 0) {
            for (int j=i*i; j<MAXN; j*=i)
                spf[j]=0;
        }
    }
}
int solve() {
    int n, a[MAXN];//
    sieve();
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++) {
        printf("%d%c", spf[a[i]]==0?-1:spf[a[i]], i==n-1?'\n':' ');
    }
    for (int i=0;i<n;i++) {
        printf("%d%c", spf[a[i]]==0?-1:(a[i]%2==0?2:a[i]/spf[a[i]]), i==n-1?'\n':' ');
    }
    return 0;
}
int main() {
    int t=1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
