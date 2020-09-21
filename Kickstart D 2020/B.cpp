#include<bits/stdc++.h>
using namespace std;
int solve() {
    int K, A[10000];
    scanf("%d", &K);
    int pt=0, mn=0, mx=0, cnt=0;
    for (int i=0;i<K;i++) {
        scanf("%d", &A[i]);
    }
    for (int i=1;i<K;i++) {
        if (A[i]-A[i-1]>0) {
            pt++;
            if (pt>mx)
                mx = pt;
            else {
                pt=1;
                mx=1;
                mn=0;
            }
        }
        else if (A[i]-A[i-1]<0) {
            pt--;
            if (pt<mn)
                mn = pt;
            else{
                pt=-1;
                mx=0;
                mn=-1;
            }
        }
        if (mx-mn==4) {
            cnt++;
            pt=0;
            mx=0;
            mn=0;
        }
    }
    return cnt;
}
int main() {
    int t=1;
    scanf("%d", &t);
    for (int i=1;i<=t;i++) {
        printf("Case #%d: %d\n", i, solve());
    }
    return 0;
}
