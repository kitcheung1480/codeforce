#include<stdio.h>
int main()
{
	char str[105];
	scanf("%s",str);
	int len=strlen(str),i,up=0,low=0;
	for (i=0;i<len;i++)
		if (str[i]>='a')
			low++;
		else
			up++;
	if (up>low)
	{
		for (i=0;i<len;i++)
			if (str[i]>='a')
				str[i]+='A'-'a';
	}
	else
	{
		for (i=0;i<len;i++)
			if (str[i]<'a')
				str[i]+='a'-'A';
	}
	printf("%s\n",str);
	return 0;
}