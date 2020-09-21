#include<stdio.h>
int main()
{
	char s[205];
	scanf("%s",s);
	int len=strlen(s),flag=1,i;
	for (i=len-3;i>=0;i-=3)
		if (strncmp(&s[i],"WUB")==0)
			len-=3;
		else
			break;
	for (i=0;i<len;i++)
		if (strncmp(&s[i],"WUB",3)==0)
		{
			i+=2;
			if (flag)
				continue;
			printf(" ");
		}
		else
		{
			printf("%c",s[i]);
			flag=0;
		}
	printf("\n");
	return 0;
}