#include<stdio.h>
int main()
{
	int lucky[1001],i,j;
	for (i=1;i<=1000;i++)
	{
		j=i;
		lucky[i]=1;
		while (j!=0)
		{
			if (j%10!=4&&j%10!=7)
			{
				lucky[i]=0;
				break;
			}
			j/=10;
		}
	}
	scanf("%d",&j);
	for (i=1;i<=1000;i++)
		if (lucky[i]&&j%i==0)
		{
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}