#include<stdio.h>
int main()
{
	int test(int y)
	{
		int digit[10]={0},i;
		for (i=0;i<4;i++,y/=10)
			digit[y%10]++;
		for (i=0;i<10;i++)
			if (digit[i]>=2)
				return 0;
		return 1;
	}
	int i,year;
	scanf("%d",&year);
	while (test(++year)==0);
	printf("%d\n",year);
	return 0;
}