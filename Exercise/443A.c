#include<stdio.h>
int main()
{
	char ch;
	int c[26]={0},count=0;
	scanf("%c",&ch);
	while (ch!='\n')
	{
		if (ch>='a'&&ch<='z'&&c[ch-'a']==0)
		{
			c[ch-'a']=1;
			count++;
		}
		scanf("%c",&ch);
	}
	printf("%d\n",count);
	return 0;
}