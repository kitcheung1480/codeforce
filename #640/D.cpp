#include<bits/stdc++.h>
using namespace std;
int abs(int a) {
    return a>0?a:-a;
}
int solve() {
    int n, a[1000];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int p[2]={0, n-1}, pt=0, last=0, cnt=0, m=0, point[2]={};
    while (1) {
        cnt=0;
        m++;
        while (cnt<=last ) {
            cnt+=a[p[pt]];
            if (abs(p[pt]-p[(pt+1)%2])>=1) {
                if (pt==0) p[pt]++;
                else p[pt]--;
            }
            else {
                point[pt]+=cnt;
                printf("%d %d %d\n", m, point[0], point[1]);
                return 0;
            }
        }
        last=cnt;
        point[pt]+=cnt;
        //printf("%d %d %d\n", m, point[0], point[1]);
        pt=(pt+1)%2;
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
