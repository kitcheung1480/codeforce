#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    long long a, b, x, y;
    scanf("%d", &N);
    while (N-->0) {
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
        if (b>2*a)   b=2*a;
        printf("%lld\n", min(x,y)*b+(max(x,y)-min(x,y))*a);
    }
    return 0;
}
