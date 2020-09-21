#include<stdio.h>
int main()
{
	int s[4],i,j,count=0;
	for (i=0;i<4;i++)	scanf("%d",&s[i]);
	for (i=0;i<3;i++)
		for (j=i+1;j<4;j++)
			if (s[i]==s[j])	s[j]=++count*(-1);
	printf("%d\n",count);
	return 0;
}