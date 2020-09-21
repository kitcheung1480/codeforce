#include<stdio.h>
int main()
{
    int p[2],n,flag=0;
    scanf("%d %d %d",&p[0],&p[1],&n);
    int gcd(int a,int b)
    {
        if (a==0) return b;
        if (b==0) return a;
        return gcd(b,a%b);
    }
    while (n>=0)
    {
        n-=gcd(n,p[flag]);
        flag^=1;
    }
    printf("%d\n",flag);
    return 0;
}