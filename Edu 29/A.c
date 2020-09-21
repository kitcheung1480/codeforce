#include<stdio.h>
int main()
{
	char x[15];
	scanf("%s",&x);
	int i,len=strlen(x);
	for (i=len-1;i>=0;i--)
		if (x[i]=='0')
			x[i]='\0';
		else
			break;
	len=strlen(x);
	for (i=0;i<len/2;i++)
		if (x[i]!=x[len-i-1])
		{
			printf("NO\n");
			return 0;
		}
	printf("YES\n");
	return 0;
}