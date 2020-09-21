#include<bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    scanf("%d", &N);
    char I[100], O[100];
    scanf(" %s %s", I, O);
    bool ok[100][100]={};
    for (int i=0;i<N;i++) {
        ok[i][i]=true;
        for (int j=i-1;j>=0 && O[j+1]=='Y' && I[j]=='Y';j--) {
            ok[i][j]=true;
        }
        for (int j=i+1;j<N && O[j-1]=='Y' && I[j]=='Y';j++) {
            ok[i][j]=true;
        }
    }
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            if (ok[i][j])
                printf("Y");
            else
                printf("N");
        }
        printf("\n");
    }
}
int main() {
    freopen ("travel_restrictions_input.txt","r",stdin);
    freopen ("A.txt","w",stdout);
    int t=1;
    scanf("%d", &t);
    for (int i=1;i<=t;i++) {
        printf("Case #%d:\n", i);
        solve();
    }
    return 0;
}
