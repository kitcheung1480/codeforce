#include<stdio.h>
int main()
{
	char name[5][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
	int n,i;
	scanf("%d",&n);
	for (i=2;n-(i-1)*5>0;i<<=1);
	i>>=1;
	int k=n-(i-1)*5;
	printf("%s\n",name[(k+i-1)/i-1]);
	
	return 0;
}