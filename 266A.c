#include<stdio.h>
int main()
{
	int n,count=0;
	char new=0,odd;
	scanf("%d%*c",&n);
	while (n-->0)
	{
		odd=new;
		scanf("%c",&new);
		if (new==odd)
			count++;
	}
	printf("%d\n",count);
	return 0;
}