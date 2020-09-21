#include<stdio.h>
int main()
{
	long long n,k;
	scanf("%I64d %I64d",&n,&k);
	printf("%I64d\n",k>(n+1)/2?2*(k-(n+1)/2):2*(k-1)+1);
	return 0;
}