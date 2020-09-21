#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(vector<int> v, int sum) {
    int n = v.size();
    bool subset[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < v[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= v[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - v[i - 1]];
        }
    }
    return subset[n][sum];
}
int solve() {
    int n;
    scanf("%d", &n);
    int p[4000];
    for (int i=0;i<n*2;i++) {
        scanf("%d", &p[i]);
    }
    vector<int> v;
    int last = 0;
    for (int i=0;i<n*2;i++) {
        if (p[i]>p[last]) {
            v.push_back(i-last);
            last = i;
        }
    }
    if (isSubsetSum(v, n))
        printf("YES\n");
    else
        printf("NO\n");
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
