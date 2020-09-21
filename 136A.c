#include<stdio.h>
int main()
{
	int n,p[105],i,t;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&t);
		p[t]=i;
	}
	for (i=1;i<=n;i++)
		printf("%d%c",p[i],i==n?'\n':' ');
	return 0;
}