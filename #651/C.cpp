#include<bits/stdc++.h>
using namespace std;
bool check(int x) {
    return (x & (x - 1)) == 0;
}
int solve() {
    int n;
    scanf("%d", &n);
    if (n==1)
        printf("FastestFinger\n");
    else if (n==2 || n%2==1)
        printf("Ashishgup\n");
    else if (n/2%2==1) {
        n/=2;
        for (int i=3;i<=sqrt(n);i+=2) {
            if (n%i==0) {
                printf("Ashishgup\n");
                return 0;
            }
        }
        printf("FastestFinger\n");
    }
    else {
        while (n%2==0) {
            n/=2;
        }
        if (n==1)
            printf("FastestFinger\n");
        else
            printf("Ashishgup\n");
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
