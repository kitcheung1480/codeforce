#include<stdio.h>
int main()
{
	long long n;
	scanf("%I64d",&n);
	if (n%2==1)
		printf("-");
	printf("%I64d\n",(n+1)/2);
	return 0;
}