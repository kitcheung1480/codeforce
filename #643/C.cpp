#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long A,B,C,D;
    scanf("%I64d%I64d%I64d%I64d", &A, &B, &C, &D);
    long long sum=0;
    while (D>=A+B && D>=C) {
        if (D>=max(A+C,B+B)) {
            if (B+C>D) {
                sum+=(B+C-D)*(B+C-D+1)/2;
                //printf("A:%I64d\n", (B+C-D)*(B+C-D+1)/2);
            }
        }
        else if (D>=min(A+C,B+B)) {
            if (A+C<B+B) {
                sum+=(B+C-D+(B+B-D))*(C-B+1)/2;
                //printf("B1:%I64d\n", (B+C-D+(B+B-D))*(C-B+1)/2);
            }
            else {
                sum+=(B+C-D+(A+C-D))*(B-A+1)/2;
                //printf("B2:%I64d\n", (B+C-D+(A+C-D))*(B-A+1)/2);
            }
        }
        else {
            sum+=(C-B+1)*(B-A+1)-(D-A-B+1)*(D-A-B+2)/2;
            //printf("C:%I64d\n", (C-B+1)*(B-A+1)-(D-A-B+1)*(D-A-B+2)/2);
        }
        D--;
    }
    if (D>=C) {
        sum+=(B-A+1)*(C-B+1)*(D-C+1);
        //printf("D:%I64d\n", (B-A+1)*(C-B+1)*(D-C+1));
    }
    printf("%I64d\n", sum);
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
