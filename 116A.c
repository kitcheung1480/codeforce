#include<stdio.h>
int main()
{
	int n,a,b,cur=0,max=0;
	scanf("%d",&n);
	while (n-->0)
	{
		scanf("%d %d",&a,&b);
		cur-=a;
		cur+=b;
		if (cur>max)	max=cur;
	}
	printf("%d\n",max);
	return 0;
}