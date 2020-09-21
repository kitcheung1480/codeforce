#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int gcd(int a,int b)
	{
		if (a==0)
			return b;
		if (b==0)
			return a;
		return gcd(b,a%b);
	}
	for (i=n/2;i>=0;i--)
		if (gcd(i,n-i)==1)
		{
			printf("%d %d\n",i,n-i);
			return 0;
		}
	return 0;
}