#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	printf("%s\n",N%2==0&&N>2?"YES":"NO");
	return 0;
}