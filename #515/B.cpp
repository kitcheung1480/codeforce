#include<bits/stdc++.h>
int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i=0;i<n;) {
        bool flag = 1;
        printf("i: %d\n", i);
        for (int j=r-1;j>-r&&flag;j--) {
                printf("j:%d\n", j);
            if (i+j<n && i+j>=0 && a[i+j]==1) {
                count++;
                i += j + r ;
                flag = 0;
            }
        }
        if (flag) {
            printf("-1\n");
            return 0;
        }
    }
    printf("%d\n", count);
    return 0;
}
