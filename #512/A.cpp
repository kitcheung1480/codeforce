#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M=0;
    scanf("%d", &N);
    while (N-->0) {
        int a;
        scanf("%d",&a);
        M+=a;
    }
    if (M>0) printf("Hard\n");
    else printf("Easy\n");
    return 0;
}
