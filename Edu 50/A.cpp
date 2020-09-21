#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    scanf("%I64d %I64d", &n, &k);
    printf("%I64d\n", k%n==0?k/n:k/n+1);
    return 0;
}
