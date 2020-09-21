#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        char input[100005];
        scanf(" %s", input);
        int len = strlen(input);
        sort(input,input+len);
        if (input[0]!=input[k-1])
            printf("%c\n", input[k-1]);
        else if (input[k]==input[len-1]) {
            printf("%c", input[0]);
            for (int i=0;i<(len-1)/k;i++)
                printf("%c", input[k]);
            printf("\n");
        }
        else {
            printf("%c%s\n", input[0], &input[k]);
        }
    }
    return 0;
}
