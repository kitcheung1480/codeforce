#include<stdio.h>
int main()
{
	int n,p,q,i,lv[105]={0},t,count=0;
	scanf("%d",&n);
	scanf("%d",&p);
	for (i=0;i<p;i++)
	{
		scanf("%d",&t);
		if (lv[t]==0)
		{
			lv[t]=1;
			count++;
		}
	}
	scanf("%d",&q);
	for (i=0;i<q;i++)
	{
		scanf("%d",&t);
		if (lv[t]==0)
		{
			lv[t]=1;
			count++;
		}
	}
	if (count==n)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}