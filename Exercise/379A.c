#include<stdio.h>
int main()
{
	int new,odd=0,a=0,b;
	scanf("%d %d",&new,&b);
	while (new!=0)
	{
		a+=new;
		odd+=new;
		new=0;
		if (odd>=b)
		{
			new+=odd/b;
			odd-=odd/b*b;
		}
		else
			break;
	}
	printf("%d\n",a);
	return 0;
}