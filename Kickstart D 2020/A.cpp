#include<bits/stdc++.h>
using namespace std;
int solve() {
    int N, V[200000];
    scanf("%d", &N);
    for (int i=0;i<N;i++) {
        scanf("%d", &V[i]);
    }
    int cnt = 0;
    int mx = -1;
    for (int i=0;i<N;i++) {
        if (V[i]>mx) {
            if (i==N-1||V[i]>V[i+1])
                cnt++;
            mx = V[i];
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
