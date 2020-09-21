#include<bits/stdc++.h>
using namespace std;
int solve() {
    int h, c, t;
    scanf("%d%d%d", &h, &c, &t);
    if (t*2>h+c) {//odd answer
        long long y=1, z=1e6;
        while (1){
            long long x = (y+z)/2;
            //printf("x: %I64d\n", x);
            if (y==z) {
                printf("%I64d\n", 2*x-1);
                return 0;
            }
            if (t*2<(float)(x*h+(x-1)*c)/(2*x-1)+(float)((x+1)*h+x*c)/(2*x+1)){
                y = (y+z+1)/2;
            }
            else z = x;
        }
    }
    else {//even answer
        printf("2\n");
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
