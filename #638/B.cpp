#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, t;
    int a[10005];
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        int c[105]= {}, cnt=0;
        for (int i=0;i<n;i++) {
            scanf("%d" ,&a[i]);
            c[a[i]]=1;
        }
        for (int i=1;i<=n;i++)
            cnt+=c[i];
        if (cnt>k)
            printf("-1\n");
        else{
            printf("%d\n",n*k);
            while (cnt<k) {
                for (int i=1;i<=n;i++) {
                    if (c[i]==0) {
                        c[i]=1;
                        cnt++;
                        break;
                    }
                }
            }
            for (int i=0;i<n;i++) {
                for (int j=1,g=0;j<=n;j++) {
                    if (c[j]==1) {
                        printf("%d", j);
                        g++;
                        if (g==k && i==n-1) {
                            printf("\n");
                        }
                        else printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}
