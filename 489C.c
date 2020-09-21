#include<stdio.h>
int main()
{
	int m,s,s2,i;
	scanf("%d %d",&m,&s);
	s2=s-1;
	if (s>m*9||(s==0&&m!=1))
	{
		printf("-1 -1\n");
		return 0;
	}
	char min[101]={0},max[101]={0};
	for (i=0;i<m;i++)
	{
		max[i]=(s>=9)?'9':(s%10)+'0';
		s-=(s>=9)?9:(s%10);
	}
	for (i=m-1;i>=0;i--)
	{
		if (i==0)
			min[i]=s2+'1';
		else
			min[i]=(s2>=9)?'9':(s2%10)+'0';
		s2-=(s2>=9)?9:s2%10;
	}
	printf("%s %s\n",min,max);
	return 0;
}