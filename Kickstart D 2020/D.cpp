#include<bits/stdc++.h>
using namespace std;
void solve() {
    int N, Q, D[1000];
    scanf("%d %d", &N, &Q);
    for (int i=1;i<N;i++) {
        scanf("%d", &D[i]);
    }
    while (Q-->0) {
        int S, K, LR[2]={-1,0}, last = 0;
        scanf("%d%d", &S, &K);
        while (K-->0) {
            if (S+LR[0]<0) {
                last = 1;
                LR[last]++;
            }
            else if (S+LR[1]>=N){
                last = 0;
                LR[last]--;
            }
            else {
                if (D[S+LR[0]]>D[S+LR[1]]){
                    last = 1;
                    LR[last]++;
                }
                else {
                    last = 0;
                    LR[last]--;
                }
            }
        }
        printf("%d%c", S+LR[last] - 1, Q==1?'\n':' ');
    }
}
int main() {
    int t=1;
    scanf("%d", &t);
    for (int i=1;i<=t;i++) {
        printf("Case #%d: ", i);
        solve();
    }
    return 0;
}
