#include<bits/stdc++.h>
using namespace std;
int main() {
    int T, len;
    char str[305];
    scanf("%d", &T);
    while(T-->0) {
        scanf(" %s", str);
        len =strlen(str);
        int num[2]={0,0};
        for (int i=0;i<len;i++) {
            num[str[i]-'0']++;
        }
        if (num[0]==0 || num[1]==0) {
            printf("%s\n", str);
        }
        else {
            for (int i=0;i<len;i++) {
                printf("%c", ((str[0]-'0'))%2+'0');
                printf("%c", ((str[0]-'0')+1)%2+'0');
            }
            printf("\n");
        }
    }
    return 0;
}
