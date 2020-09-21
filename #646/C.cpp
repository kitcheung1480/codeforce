#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, x;
    scanf("%d %d", &n, &x);
    int G[1005]={};
    for (int i=0;i<n-1;i++){
        int u, v;
        scanf("%d%d", &u, &v);
        G[u]++;
        G[v]++;
    }
    if (n==1||G[x]<=1) {
        printf("Ayush\n");
    }
    else if ((n-2)%2==0){
        printf("Ayush\n");
    }
    else
        printf("Ashish\n");
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
