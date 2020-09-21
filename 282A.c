#include<stdio.h>
int main()
{
	int n,x=0;
	char s[5];
	scanf("%d",&n);
	while (n-->0)
	{
		scanf("%s",s);
		if (s[1]=='+')
			x++;
		else
			x--;
	}
	printf("%d\n",x);
	return 0;
}