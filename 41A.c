#include<stdio.h>
#include<string.h>
int main()
{
	char a[105],b[105],t;
	scanf("%s %s",a,b);
	int i,len=strlen(a);
	for (i=0;i<len/2;i++)
	{
		t=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=t;
	}
	printf("%s\n",strcmp(a,b)==0?"YES":"NO");
	return 0;
}