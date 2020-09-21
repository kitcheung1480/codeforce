#include<bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    scanf("%d %d",&n,&d);
    int m;
    scanf("%d",&m);
    while (m-->0) {
        int x,y;
        scanf("%d %d",&x,&y);
        if (x+y>=d && x+y<=n*2-d && x-y<=d && y-x<=d)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
