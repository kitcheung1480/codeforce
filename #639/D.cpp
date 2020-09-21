#include<bits/stdc++.h>
using namespace std;
    int n, m;
    char M[1000][1005];
    void white(int x, int y) {
        if (x<0||x>=n||y<0||y>=m||M[x][y]=='.') return ;
        M[x][y]='.';
        white(x-1,y);
        white(x+1,y);
        white(x,y-1);
        white(x,y+1);
    }
int main() {
    scanf("%d %d", &n, &m);
    vector<int> row[1005], col[1005];
    for (int i=0;i<n;i++) {
        scanf(" %s", M[i]);
        for (int j=0;j<m;j++) {
            if (M[i][j]=='#') {
                row[i].push_back(j);
                col[j].push_back(i);
            }
        }
    }
    for (int i=0;i<n;i++) {
        sort(row[i].begin(), row[i].end());
        if (row[i].size()==0) {
            int j;
            for (j=0;j<m;j++) {
                if (col[j].size()==0) {
                    break;
                }
            }
            if (j==m) {
                printf("-1\n");
                return 0;
            }
        }
        else if (row[i].back()-row[i].front()!=row[i].size()-1){
                printf("-1\n");
                return 0;
        }
    }
    for (int i=0;i<m;i++) {
        sort(col[i].begin(), col[i].end());
        if (col[i].size()==0) {
            int j;
            for (j=0;j<n;j++) {
                if (row[j].size()==0) {
                    break;
                }
            }
            if (j==n) {
                printf("-1\n");
                return 0;
            }
        }
        else if (col[i].back()-col[i].front()!=col[i].size()-1){
            printf("-1\n");
            return 0;
        }
    }
    int cnt=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (M[i][j]=='#') {
                cnt++;
                white(i,j);
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
