#include<bits/stdc++.h>
using namespace std;
int a[200005];
queue<int> q;
void f(int l, int r, int k) {
    if (l>r) {
        return ;
    }
    else if (l==r) {
        a[l]=k;
    }
    else if ((r-l+1)%2==1) {
        a[(l+r)/2]=k;
        f(l,(l+r)/2-1,,h+1);
        f((l+r)/2+1,r,,h+1);
    }
    else {
        a[(l+r-1)/2]=k;
        f((l+r-1)/2+1,r,,h+1);
        f(l,(l+r-1)/2-1,,h+1);
    }
}

int solve() {
    int n;
    scanf("%d", &n);
    memset(a,0,sizeof(a));
    f(1,n,1,0);
    for (int i=0;i<n;i++) {
        printf("%d%c", q[i], i==n-1?'\n':' ');
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
