#include<stdio.h>
int main()
{
	int count[3]={0},i;
	char s[105];
	scanf("%s",s);
	for (i=0;i<strlen(s);i+=2)
		count[s[i]-'1']++;
	for (i=0;i<=strlen(s)/2;i++)
	{
		if (count[0]-->0)
		{
			printf("1%c",i==strlen(s)/2?'\n':'+');
			continue;
		}
		else if (count[1]-->0)
		{
			printf("2%c",i==strlen(s)/2?'\n':'+');
			continue;
		}
		else if (count[2]-->0)
		{
			printf("3%c",i==strlen(s)/2?'\n':'+');
			continue;
		}
	}
	return 0;
}