#include<bits/stdc++.h>
using namespace std;
int solve() {
    char ip[1005];
    scanf(" %s", ip);
    int len=strlen(ip), cnt=0;
    for (int i=0;i<len;i++) {
        if (ip[i]=='0')
            cnt++;
    }
    printf("%d\n", len-cnt);
    for (int i=0;i<len;i++) {
        if (ip[i]!='0') {
            printf("%c", ip[i]);
            for (int j=0;j<len-i-1;j++)
                printf("0");
            printf("%c", ++cnt==len?'\n':' ');
        }
    }
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
