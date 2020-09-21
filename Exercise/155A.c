#include<stdio.h>
int main()
{
	int n,max,min,a,count=0;
	scanf("%d",&n);
	scanf("%d",&a);
	max=min=a;
	while (n-->0)
	{
		scanf("%d",&a);
		if (a>max)
		{
			count++;
			max=a;
		}
		if (a<min)
		{
			count++;
			min=a;
		}
	}
	printf("%d\n",count);
	return 0;
}