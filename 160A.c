#include<stdio.h>
int main()
{
	int n,i,coin[105]={0,},sum=0,cur=0,count=0,temp;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&temp);
		coin[temp]++;
		sum+=temp;
	}
	for (i=100;i>0;i--)
		for (;coin[i]>0;coin[i]--)
		{
			cur+=i;
			count++;
			if (cur>sum-cur)
			{
				printf("%d\n",count);
				return 0;
			}
		}
	return 0;
}
		