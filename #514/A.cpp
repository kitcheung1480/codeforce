#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, L, a;
    scanf("%d %d %d", &n, &L, &a);
    int last = 0, c = 0;
    while (n-->0) {
        int t, l;
        scanf("%d %d", &t, &l);
        c += (t - last)/a;
        last = t+l;
    }
    c += (L - last)/a;
    printf("%d\n", c);
    return 0;
}
