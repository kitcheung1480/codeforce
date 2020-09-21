#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    int degree[500005]={0};
    vector<int> edge[500005];
    for (int i=0;i<m;i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    vector<int> ti[500005];
    for (int i=1;i<=n;i++) {
        int t;
        scanf("%d", &t);
        ti[t].push_back(i);
    }
    for (int i=1;i<=n;i++) {
        for (int j=0; j<ti[i].size();j++) {
            if (degree[ti[i][j]]+1!=i) {
                printf("-1\n");
                return 0;
            }
            degree[ti[i][j]]++;
        }
    }
    int pt = 0;
    for (int i=1;i<=n;i++) {
        for (int j=0; j<ti[i].size();j++) {
            printf("%d%c", ti[i][j], ++pt==n?'\n':' ');
        }
    }
    return 0;
}
int main() {
    int t=1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
