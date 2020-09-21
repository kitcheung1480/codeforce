#include<stdio.h>
int main()
{
	int n,m,a,b;
	scanf("%d %d %d %d",&n,&m,&a,&b);
	printf("%d\n",(a*m>b)?((n%m)*a<b?(n%m)*a:b)+(n/m)*b:a*n);
	return 0;
}