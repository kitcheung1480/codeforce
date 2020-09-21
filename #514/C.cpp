#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    scanf("%d", &n);
    for (int L=0, c=0; (n>>L) > 0; L++) {
        if (c==n-3) {
            printf("%d %d %d\n", 1<<L, 1<<L, (n>>L)<<L);
            return 0;
        }
        for (int i=(1<<L);i<=n;i+=(1<<(L+1)),c++)
            printf("%d%c", 1<<L, c==n?'\n':' ');
    }
    return 0;
}
