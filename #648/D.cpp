#include<bits/stdc++.h>
using namespace std;
char M[50][51];
int n, m , cnt;
bool check(int x, int y) {
    if (x<0 || x>=n || y<0 || y>=m)
        return 0;
    if (M[x][y]=='G')
        return 1;
    else if (M[x][y]!='B')
        M[x][y]='#';
    return 0;
}
void check2(int x, int y){
    if (x<0 || x>=n || y<0 || y>=m || M[x][y]=='#')
        return ;
    if (M[x][y]=='G') {
        cnt--;
    }
    M[x][y]='#';
    check2(x-1, y);
    check2(x, y-1);
    check2(x+1, y);
    check2(x, y+1);
}
int solve() {
    scanf("%d%d", &n, &m);
    for (int i=0;i<n;i++) {
        scanf(" %s", M[i]);
    }
    cnt = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (M[i][j]=='B') {
                if (check(i-1,j) || check(i,j-1) || check(i+1,j) || check(i,j+1)) {
                    printf("No\n");
                    return 0;
                }
            }
            else if (M[i][j] == 'G') {
                cnt++;
            }
        }
    }
    check2(n-1,m-1);
    //printf("%d\n", cnt);
    if (cnt==0){
        printf("Yes\n");
        return 0;
    }
    printf("No\n");
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
