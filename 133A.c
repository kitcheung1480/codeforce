#include<stdio.h>
int main()
{
	char s[105];
	scanf("%s",s);
	int i;
	for (i=0;i<strlen(s);i++)
		if (s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			printf("YES");
			return 0;
		}
	printf("NO\n");
	return 0;
}