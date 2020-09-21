#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d\n",m-1>=n-m?(m-1>1?m-1:1):(m+1<n?m+1:n));
	return 0;
}