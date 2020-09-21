#include<stdio.h>
int main()
{
	int n,h,a,count=0;
	scanf("%d %d",&n,&h);
	while (n-->0)
	{
		scanf("%d",&a);
		count+=a>h?2:1;
	}
	printf("%d\n",count);
	return 0;
}