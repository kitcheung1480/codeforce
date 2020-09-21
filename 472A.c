#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int check(int num)
	{
		int i;
		for (i=2;i<=sqrt(num);i++)
			if (num%i==0)
				return 1;
		return 0;
	}
	int i;
	for (i=4;i<=n/2;i++)
	{
		if (check(i)&&check(n-i))
		{
			printf("%d %d\n",i,n-i);
			return 0;
		}
	}
	return 0;
}