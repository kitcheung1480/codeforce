#include<stdio.h>
int main()
{
	int n,s[105],i,min=101,pmin,max=0,pmax;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&s[i]);
	for (i=0,pmin=0;i<n;i++)
		if (s[i]<=min)
		{
			min=s[i];
			pmin=i;
		}
	for (i=n-1,pmax=n-1;i>=0;i--)
		if (s[i]>=max)
		{
			max=s[i];
			pmax=i;
		}
	printf("%d\n",n-1-pmin+pmax-(pmax>pmin?1:0));
	return 0;
}