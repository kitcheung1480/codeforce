#include<stdio.h>
int main()
{
	int n,flag=1,as=0,t,oddt;
	scanf("%d%d%d",&n,&oddt,&t);
	as=t-oddt;
	oddt=t;
	while (n-->2)
	{
		scanf("%d",&t);
		if (flag==1)
			if (t-oddt!=as)
				flag=0;
			else
				oddt=t;
	}
	if (flag==1)
		printf("%d\n",oddt+as);
	else
		printf("%d\n",t);
	return 0;
}