#include<stdio.h>
int main()
{
	long long n;
	int k;
	scanf("%I64d %d",&n,&k);
	long long gcd(long long a,long long b)
	{
		if (a==0)
			return b;
		if (b==0)
			return a;
		return gcd(b,a%b);
	}
	long long lcm(long long a,long long b)
	{
		return a/gcd(a,b)*b;
	}
	long long E(int a)
	{
		long long e=1;
		int i;
		for (i=0;i<a;i++)
			e*=10;
		return e;
	}
	printf("%I64d\n",lcm(n,E(k)));
	return 0;
}