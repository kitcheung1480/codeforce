#include<stdio.h>
int main()
{
	char s[105],cur;
	scanf("%s",s);
	int count,i;
	for (i=1,cur=s[0],count=1;i<strlen(s);i++)
	{
		if (s[i]==cur)
			count++;
		else
		{
			cur=s[i];
			count=1;
		}
		if (count>=7)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}