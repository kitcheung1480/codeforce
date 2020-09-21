#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", 2*((1<<(n/2))-1));
    }
    return 0;
}
