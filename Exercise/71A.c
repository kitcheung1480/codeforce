#include<stdio.h>
int main()
{
	int n;
	char s[105];
	scanf("%d",&n);
	while (n-->0)
	{
		scanf("%s",s);
		if (strlen(s)>10)
			printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
		else
			printf("%s\n",s);
	}
	return 0;
}