#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    scanf("%d", &n);
    char s[2][1000005];
    scanf(" %s %s", s[0], s[1]);
    vector<int> v;
    for (int i=0;i<n;i++) {
        if (s[0][i]!=s[1][i]) {
            v.push_back(s[0][i]-'0');
        }
    }
    if (count (v.begin(), v.end(), 0) != count (v.begin(), v.end(), 1))
        printf("-1\n");
    else {
        int cnt = 0, r = v.size();
        while (r>0) {
            int last = -1;
            vector<int> v2;
            for (int i=0;i<v.size();i++) {
                if (v[i]!=last) {
                    last = v[i];
                    v[i]=-1;
                    r--;
                }
                else {
                    v2.push_back(v[i]);
                }
            }
            v = v2;
            cnt++;
        }
        printf("%d\n", cnt);
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
