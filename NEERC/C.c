#include<stdio.h>
int main()
{
	long long n,k;
	scanf("%I64d%I64d",&n,&k);
	if ((n-1)*n<k*2)
	{
		printf("Impossible\n");
		return 0;
	}
	
	void f(long long m,long long x)
	{
		long long i;
		if (m==0)
		    return ;
		if (x==0)
		{
			for (i=0;i<m;i++)
				printf("()");
		    return ;
		}
		
		long long y=((long long)sqrtl(8*x+1)-1)/2;
		for (i=0;i<=y;i++)
			printf("(");
		for (i=0;i<=y;i++)
			printf(")");
		f(m-y-1,x-y*(y+1)/2);
	}
	f(n,k);
	printf("\n");
	return 0;
}