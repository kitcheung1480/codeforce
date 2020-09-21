#include<bits/stdc++.h>
using namespace std;
long long coor[9][2];
long long sq_dis(int a, int b){
    return (coor[a][0]-coor[b][0])*(coor[a][0]-coor[b][0])+(coor[a][1]-coor[b][1])*(coor[a][1]-coor[b][1]);
}
bool form_ret(int a, int b, int c, int d) {
    bool gg = sq_dis(a,b) == sq_dis(c,d) && sq_dis(a,c) == sq_dis(b,d) && sq_dis(a,b) + sq_dis(a,c)==sq_dis(b,c) && sq_dis(d,b) + sq_dis(d,c)==sq_dis(b,c);
    //printf("%d\n",gg);
    return gg;
}
bool form_sq(int a, int b, int c, int d) {
    bool gg = sq_dis(a,b)==sq_dis(a,c) && sq_dis(a,b) + sq_dis(a,c)==sq_dis(b,c) && sq_dis(d,b)==sq_dis(d,c) && sq_dis(d,b) + sq_dis(d,c)==sq_dis(b,c);
    //printf("%d\n",gg);
    return gg;
}
int main () {
    for (int i=1;i<=8;i++)
        scanf("%I64d %I64d", &coor[i][0], &coor[i][1]);
    int num[8]={1,2,3,4,5,6,7,8};
    for (int i=0;i<40320;i++) {
        //printf("%d %d %d %d %d %d %d %d\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7]);
        if (form_sq(num[0],num[1],num[2],num[3])&&form_ret(num[4],num[5],num[6],num[7])) {
            printf("YES\n%d %d %d %d\n%d %d %d %d\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7]);
            return 0;
        }
        next_permutation(num, num+8);
        //getchar();
    }
    printf("NO\n");
    return 0;
}
