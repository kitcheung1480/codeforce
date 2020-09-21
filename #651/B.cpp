#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    int a;
    vector<int> b[2];
    for (int i=0;i<n*2;i++) {
        scanf("%d", &a);
        b[a%2].push_back(i+1);
    }
    while (b[1].size() > 1 && n>1) {
        printf("%d ", b[1].back());
        b[1].pop_back();
        printf("%d\n",  b[1].back());
        b[1].pop_back();
        n--;
    }
    while (b[0].size() > 1 && n>1) {
        printf("%d ", b[0].back());
        b[0].pop_back();
        printf("%d\n",  b[0].back());
        b[0].pop_back();
        n--;
    }
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
