#include<stdio.h>
int main()
{
	int n,i,t,h[35],count[105]={0},sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %d",&h[i],&t);
		count[t]++;
	}
	for (i=0;i<n;i++)
		sum+=count[h[i]];
	printf("%d\n",sum);
	return 0;
}