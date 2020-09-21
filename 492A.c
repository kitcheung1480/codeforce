#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	for (k=1;k*(k+1)*(k+2)<=n*6;k++);
	printf("%d\n",k-1);
	return 0;
}