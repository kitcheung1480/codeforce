#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a[100005], pre[100005];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        pre[i]=a[i]+(i==0?0:pre[i-1]);
    }
    int sum = 0, mx = 0;
    for (int i=0;i<n;i++) {
        if (a[i] > mx) {
            sum += mx;
            mx = a[i];
        }
        else sum += a[i];
        if (sum < 0) {
            mx = 0;
            sum = 0;
        }
        else if (sum>mx){
            mx = sum;
        }
    }
    printf("%d\n", mx);
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
