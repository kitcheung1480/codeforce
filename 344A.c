#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	char odd[3]={0},new[3];
	while (n-->0)
	{
		scanf("%s",&new);
		if (strcmp(new,odd)!=0)
		{
			strcpy(odd,new);
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}