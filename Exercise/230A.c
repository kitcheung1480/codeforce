#include<stdio.h>
int main()
{
	int s,n,x[1005],y[1005],i,j,count=0;
	scanf("%d %d",&s,&n);
	for (i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if (s>x[j])
			{
				s+=y[j];
				x[j]=1e9;
				count++;
			}
	printf("%s\n",count==n?"YES":"NO");
	return 0;
}