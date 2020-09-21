#include<stdio.h>
int main()
{
	char a[105],b[105];
	scanf("%s %s",a,b);
	int i;
	for (i=0;i<strlen(a);i++)
		printf("%c",((a[i]-'0')^(b[i]-'0'))+'0');
	printf("\n");
	return 0;
}