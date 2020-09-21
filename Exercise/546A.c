#include<stdio.h>
int main()
{
	int k,n,w;
	scanf("%d %d %d",&k,&n,&w);
	printf("%d\n",k*(w+1)*w/2>n?k*(w+1)*w/2-n:0);
	return 0;
}