#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for (i=1;i<=n;i++)
    {
        if (i%4==0)
        {
            printf("#");
            for (j=0;j<m-1;j++) printf(".");
        }
        else if (i%2==0)
        {
            for (j=0;j<m-1;j++) printf(".");
            printf("#");
        }
        else for (j=0;j<m;j++) printf("#");
        printf("\n");
    }
    return 0;
}