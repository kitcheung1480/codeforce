#include<bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    scanf("%d", &N);
    char s[100000];
    scanf(" %s", s);
    int c[2]={};
    for (int i=0;i<N;i++) {
        c[s[i]-'A']++;
    }
    if (c[0]-c[1]==1 || c[1]-c[0]==1)
        printf("Y\n");
    else
        printf("N\n");
}
int main() {
    freopen ("alchemy_input.txt","r",stdin);
    freopen ("B.txt","w",stdout);
    int t=1;
    scanf("%d", &t);
    for (int i=1;i<=t;i++) {
        printf("Case #%d: ", i);
        solve();
    }
    return 0;
}
