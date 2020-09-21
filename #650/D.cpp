#include<bits/stdc++.h>
using namespace std;
int solve() {
    char s[55];
    scanf(" %s", s);
    int n = strlen(s), m, b[50];
    scanf("%d", &m);
    for (int i=0;i<m;i++)
        scanf("%d", &b[i]);
    int ch[26]={}, c[55]={};
    for (int i=0;i<n;i++)
        ch[s[i]-'a']++;
    int pt = 25, pt2=0;
    while (pt2<m) {
        vector<int> v;
        for (int j=0;j<m;j++) {
            if (b[j]==0) {
                v.push_back(j);
            }
        }
        while (ch[pt]<v.size())
            pt--;
        for (int j=0;j<m;j++) {
            if (b[j]==0) {
                c[j]=pt+'a';
                b[j]=-1;
            }
        }
        pt--;
        for (int j=0;j<m;j++) {
            if (b[j]>0) {
                int ded = 0;
                for (int k=0;k<v.size();k++) {
                    ded+=abs(v[k]-j);
                }
                b[j] -= ded;
            }
        }
        pt2 += v.size();
    }
    for (int i=0;i<m;i++)
        printf("%c", c[i]);
    printf("\n");
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
