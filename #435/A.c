#include<stdio.h>
int main()
{
	int n,x;
	int s[105]={};
	scanf("%d %d",&n,&x);
	int i,t;
	for (i=0;i<n;i++)
	{
		scanf("%d",&t);
		s[t]=1;
	}
	int count=0;
	for (i=0;i<x;i++)
		if (s[i]==0)
			count++;
	if (s[x]==1)
		count++;
	printf("%d\n",count);
	return 0;
}