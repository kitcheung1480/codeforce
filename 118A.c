#include<stdio.h>
int main()
{
	char s[105];
	scanf("%s",s);
	int i;
	for (i=0;i<strlen(s);i++)
		if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
			continue;
		else if (s[i]<'a')
			printf(".%c",s[i]-'A'+'a');
		else
			printf(".%c",s[i]);
	printf("\n");
	return 0;
}