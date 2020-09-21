#include<stdio.h>
int main()
{
	char a[105],b[105];
	int i;
	scanf("%s %s",a,b);
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>='a')
			a[i]+='A'-'a';
		if (b[i]>='a')
			b[i]+='A'-'a';
	}
	printf("%d\n",strcmp(a,b));
	return 0;
}