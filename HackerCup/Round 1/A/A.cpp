#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
void solve() {
    int N, K, W;
    scanf("%d%d%d", &N, &K, &W);
    int L[N], H[N];
    long long A,B,C,D;
    for (int i=0;i<K;i++) {
        scanf("%d", &L[i]);
    }
    scanf("%I64d%I64d%I64d%I64d", &A,&B,&C,&D);
    for (int i=K;i<N;i++) {
        L[i]=(A*L[i-2]+B*L[i-1]+C)%D+1;
    }
    for (int i=0;i<K;i++) {
        scanf("%d", &H[i]);
    }
    scanf("%I64d%I64d%I64d%I64d", &A,&B,&C,&D);
    for (int i=K;i<N;i++) {
        H[i]=(A*H[i-2]+B*H[i-1]+C)%D+1;
    }
    long long parameter = (W*2+H[0]*2)%mod;
    //printf("p=%d\n", parameter);
    long long product = parameter%mod;
    for (int i=1;i<N;i++) {
        if (L[i]-L[i-1]<=W) {
            int MaxH = H[i-1];
            for (int j=i-2;j>=0&&L[i]-L[j]<=W;j--)
                MaxH = max(MaxH,H[j]);
            parameter += (L[i]-L[i-1])*2+(H[i]-min(H[i],MaxH))*2;
        }
        else
            parameter += W*2+H[i]*2;
        parameter %= mod;
        //printf("p=%d\n", parameter);
        product *= parameter;
        product %= mod;
    }
    printf("%I64d\n", product);
}
int main() {
    freopen ("input3.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int T=1;
    scanf("%d", &T);
    for (int i=1;i<=T;i++) {
        printf("Case #%d: ", i);
        solve();
    }
    return 0;
}
