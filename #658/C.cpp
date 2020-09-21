#include<bits/stdc++.h>
using namespace std;
//*
int solve() {
    int n;
    scanf("%d", &n);
    char a[100005], b[100005];
    scanf(" %s %s", a, b);
    deque<int> v;
    int a_head=0, a_tail=n-1, dir=0, pt=a_tail;
    for (int b_tail=n-1; b_tail>=0; b_tail--) {
        if ((a[pt]^dir)!=b[b_tail]) {
            dir = 1-dir;
            pt = dir?a_head:a_tail;
            if ((a[pt]^dir)!=b[b_tail] && b_tail) {
                v.push_back(1);
            }
            v.push_back(b_tail+1);
        }
        pt = dir?++a_head:--a_tail;
    }
    printf("%d", v.size());
    for (int i=0;i<v.size();i++) {
        printf(" %d", v[i]);
    }
    printf("\n");
    return 0;
}
//*/
/*
int solve() {
    int n;
    scanf("%d", &n);
    char a[100005], b[100005];
    scanf(" %s %s", a, b);
    while (a[n-1]==b[n-1] && n)
        n--;
    if (n==0) {
        printf("0\n");
        return 0;
    }
    vector<int> x, y;
    for (int i=1;i<n;i++) {
        if (a[i]!=a[i-1])
            x.push_back(i);
    }
    for (int i=1;i<n;i++) {
        if (b[i]!=b[i-1])
            y.push_back(i);
    }
    printf("%d", x.size()+y.size()+1);
    for (int i=0;i<x.size();i++)
        printf(" %d", x[i]);
    printf(" %d", n);
    for (int i=y.size()-1;i>=0;i--)
        printf(" %d", y[i]);
    printf("\n");
    return 0;
}
*/
int main() {
    int t=1;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
