#include<bits/stdc++.h>
using namespace std;

int n, m;
char hashtable[1000000]={0};
int a(int x, int y) {
    if (x>=n ||x < 0 || y>=m || y < 0 || hashtable[x*m+y]==0) return 0;
    return 1;
}
int b(int x, int y) {
    for (int k=-1;k<=1;k++) {
        for (int l=-1;l<=1;l++) {
            if (k==0 && l==0)
                continue;
            else if (a(x+k,y+l) == 0)
                return 0;
        }
    }
    return 1;
}
int main() {
    scanf("%d %d", &n, &m);
    char ch;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf(" %c", &ch);
            if (ch == '#')
                hashtable[i*m+j]=1;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (hashtable[i*m+j] == 1) {
                char flag = 0;
                for (int k=-1;k<=1;k++) {
                    for (int l=-1;l<=1;l++) {
                        if (k==0 && l==0)
                            continue;
                        else if (b(i+k,j+l) == 1){
                            flag = 1;
                            k=l=2;
                        }
                    }
                }
                if (flag == 0) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}
