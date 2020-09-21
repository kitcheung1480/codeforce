#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, cnt=0;
        scanf("%d", &n);
        while (n>=2) {
            for (int i=0;(i*i*3+i)/2<=n;i++);
            i--;
            n-=(i*i*3+i)/2;
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
