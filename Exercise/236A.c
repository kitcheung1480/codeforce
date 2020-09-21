#include<stdio.h>
int main()
{
	char c[26]={0},ch;
	scanf("%c",&ch);
	while (ch!='\n')
	{
		c[ch-'a']=1;
		scanf("%c",&ch);
	}
	int i,count=0;
	for (i=0;i<26;i++)
		if (c[i]==1)
			count++;
	printf("%s\n",count%2==1?"IGNORE HIM!":"CHAT WITH HER!");
	return 0;
}