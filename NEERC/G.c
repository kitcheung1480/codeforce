#include<stdio.h>
int main()
{
	int n,c[7]={},i,t;
	char ch;
	scanf("%d%*c",&n);
	while (n-->0)
	{
		for (i=0;i<7;i++)
		{
			scanf("%c",&ch);
			if (ch=='1')
			    c[i]++;
		}
		scanf("%*c");
	}
	for (t=0,i=0;i<7;i++)
		if (c[i]>t)
			t=c[i];
	printf("%d",t);
	return 0;
}