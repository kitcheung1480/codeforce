#include<stdio.h>
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	int v[200005],head=0,flag;
	for (i=0;i<n;i++)
		scanf("%d",&v[i]);
	int odd=0;
	for (i=0;i<n;i++)
	{
	    odd=0;
	    flag=1;
		for (j=head;j<n;j++)
		{
			if (v[j]!=-1)
			{
				if (odd==0)
				{
					printf("%d",v[j]);
					odd=v[j];
					v[j]=-1;
				}
				else if (v[j]>odd)
				{
					printf(" %d",v[j]);
					odd=v[j];
					v[j]=-1;
				}
				else
				    flag=0;
			}
			if (flag)
			    head++;
		}
		printf("\n");
		if (head==n)
			break;
	}
	return 0;
}