#include<stdio.h>
int main()
{
	int min(int a,int b)
	{	return a<b?a:b;	}
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%s\n",min(n,m)%2==0?"Malvika":"Akshat");
	return 0;
}