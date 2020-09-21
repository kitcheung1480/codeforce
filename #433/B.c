#include<stdio.h>
int main()
{
	long long n,k;
	scanf("%I64d %I64d",&n,&k);
	if (n==k||k==0)
		printf("0 ");
	else
		printf("1 ");
	if (k*3>=n)
		printf("%I64d\n",n-k);
	else 	printf("%I64d\n",k*2);
	return 0;
}