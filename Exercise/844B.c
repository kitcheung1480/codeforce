#include<stdio.h>
int main()
{
	int n,m,i,j,a,r1c[51]={0},r0c[51]={0},c1c[51]={0},c0c[51]={0};
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
			scanf("%d",&a);
			if (a==0)
			{
				r0c[i]++;
				c0c[j]++;
			}
			else
			{
				r1c[i]++;
				c1c[j]++;
			}
		}
	long long count=0;
	for (i=0;i<n;i++)
	{
		count+=((long long)1<<r0c[i])-1;
		count+=((long long)1<<r1c[i])-1;
	}
	for (i=0;i<m;i++)
	{
		count+=((long long)1<<c0c[i])-1;
		count+=((long long)1<<c1c[i])-1;
	}
	printf("%I64d\n",count-n*m);
	return 0;
}