#include<bits/stdc++.h>
using namespace std;
int solve() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a>b){
        swap(a,b);
    }
    if (b>=2*a) {
        printf("%d\n", a);
    }
    else {
        int cnt = b-a;
        int a2 = 2*a-b;
        printf("%d\n", cnt + a2/3*2 + (a2%3==2));
    }
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
