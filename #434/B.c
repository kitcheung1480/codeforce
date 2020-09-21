#include<stdio.h>
int main()
{
	int n,m,i,k,f;
	scanf("%d %d",&n,&m);
	int ans=-1;
	int R[105];
	for (i=1;i<=100;i++)
		R[i]=1;
	while (m-->0)
	{
		scanf("%d %d",&k,&f);
		for (i=1;i<(k+f-1)/f;i++)
			R[i]=0;
	    if (f!=1)
		    for (i=(k-1)/(f-1)+1;i<=100;i++)
			    R[i]=0;
	}
	for (i=1;i<=100;i++)
		if (R[i]==1)
			if (ans==-1)
				ans=(n+i-1)/i;
			else if (ans!=(n+i-1)/i)
			{
				printf("-1\n");
				return 0;
			}
	printf("%d\n",ans);
	return 0;
}