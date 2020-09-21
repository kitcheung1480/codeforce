#include<stdio.h>
int main()
{
	int n,i,odd=0,even=0,t,pto,pte;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if (t%2==0)
		{
			even++;
			pte=i;
		}
		else
		{
			odd++;
			pto=i;
		}
		if (even>1&&odd==1)
		{
			printf("%d\n",pto);
			return 0;
		}
		else if (odd>1&&even==1)
		{
			printf("%d\n",pte);
			return 0;
		}
	}
	return 0;
}
			