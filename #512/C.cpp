#include<bits/stdc++.h>
using namespace std;

bool check(int num, int arr[100], int n) {
    int tmp = 0;
    int c=0;
    for (int i=0;i<n;i++) {
        tmp += arr[i];
        //printf("%d==%d %d\n",tmp,num,arr[i]);/////////////////////
        if (tmp == num) {
            tmp = 0;
            c++;
        }
        else if (tmp >num) return 0;
    }
    return tmp == 0 && c>1;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[100], sum=0;
    for (int i=0;i<n;i++) {
        scanf("%1d", &a[i]);
        sum+=a[i];
    }
    for (int i=1;i<sum;i++) {
        //printf("%d:\n",i);/////////////////////////////
        if (sum%i==0 && check(i,a,n)) {
            printf("YES\n");
            return 0;
        }
        //printf("end %d\n",i);/////////////////////////
    }
    if (sum == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
