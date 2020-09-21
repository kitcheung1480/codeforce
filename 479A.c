#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max(int a,int b)
	{	return a>b?a:b;	}
	printf("%d\n",max(a*b*c,max(a*(b+c),max((a+b)*c,a+b+c))));
	return 0;
}