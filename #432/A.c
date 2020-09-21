#include<stdio.h>
int main()
{
	int n,k,t;
	scanf("%d %d %d",&n,&k,&t);
	if (t>=k&&t<=n)
		printf("%d\n",k);
	else if (t<k)
		printf("%d\n",t);
	else if (t>n)
		printf("%d\n",n+k-t);
	return 0;
}