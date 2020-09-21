#include<bits/stdc++.h>
using namespace std;
int N,A,B,L[100]={};
int M[100]={};
void mark(int i, int P) {
    int pt = i, gg=0;
    while (pt!=0) {
        if (gg++%P==0){
            M[pt]=1;
        }
        pt=L[pt]-1;
    }
    if (gg%P==0){
        M[pt]=1;
    }
}
void unmark(int i, int P) {
    int pt = i, gg=0;
    while (pt!=0) {
        if (gg++%P==0){
            M[pt]=0;
        }
        pt=L[pt]-1;
    }
    if (gg%P==0){
        M[pt]=0;
    }
}
double solve() {
    scanf("%d %d %d", &N, &A, &B);
    for (int i=1;i<N;i++)
        scanf("%d", &L[i]);
    double val = 0.0;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            mark(i, A);
            mark(j, B);
            for (int k=0;k<N;k++) {
                if (M[k]==1)
                    val += 1.0/N/N;
            }
            unmark(j, B);
            unmark(i, A);
        }
    }
    return val;
}
int main() {
    int t=1;
    scanf("%d", &t);
    for (int i=1;i<=t;i++) {
        printf("Case #%d: %lf\n", i, solve());
    }
    return 0;
}
