#include<stdio.h>
int main()
{
	int r,d,n,x,y,k,count=0;
	scanf("%d %d %d",&r,&d,&n);
	int check(int a,int b,int c)
	{
		return (a*a+b*b>=(r-d+c)*(r-d+c))&&(a*a+b*b<=(r-c)*(r-c));
	}
	while (n-->0)
	{
		scanf("%d %d %d",&x,&y,&k);
		if (check(x,y,k))
			count++;
	}
	printf("%d\n",count);
	return 0;
}