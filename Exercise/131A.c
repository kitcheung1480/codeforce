#include<stdio.h>
int main()
{
	char s[105];
	scanf("%s",s);
	int i;
	for (i=1;i<strlen(s);i++)
		if (s[i]>='a')
		{
			printf("%s\n",s);
			return 0;
		}
	for (i=0;i<strlen(s);i++)
		if (s[i]>='a')
			s[i]+='A'-'a';
		else
			s[i]+='a'-'A';	
	printf("%s\n",s);
	return 0;
}