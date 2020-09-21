#include<stdio.h>
int main()
{
	long long n,m,new=0,odd,time=0,i;
	scanf("%I64d %I64d",&n,&m);
	for (i=0;i<m;i++)
	{
		odd=new;
		scanf("%I64d",&new);
		if (new<odd)
			time+=n;
	}
	time+=new-1;
	printf("%I64d\n",time);
	return 0;
}