#include<stdio.h>
int main()
{
	int i,j,temp;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		{
			scanf("%d",&temp);
			if (temp==1)
			{
				printf("%d\n",abs(i-2)+abs(j-2));
				return 0;
			}
		}
	return 0;
}