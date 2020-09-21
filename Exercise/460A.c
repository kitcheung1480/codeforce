#include<stdio.h>
int main()
{
	int n,m,day;
	scanf("%d %d",&n,&m);
	for (day=1;n>0;day++)
	{
		n--;
		if (day%m==0)
			n++;
	}
	printf("%d\n",--day);
	return 0;
}