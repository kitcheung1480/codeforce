#include<stdio.h>
int main()
{
	int n;
	long long p,q,r,max[100005],min[100005],a;
	scanf("%d%I64d%I64d%I64d",&n,&p,&q,&r);
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%I64d",&a);
		if (i>0)
		{
			if (a>max[i-1])
				max[i]=a;
			if (a<min[i-1])
				min[i]=a;
		}
	}
	long long x=-3000000000000000001;
	long long cal(int k)
	{
		return (p>0?p*max[k]:p*min[k])+(q>0?q*max[k]:q*min[k])+(r>0?r*max[k]:r*min[k]);
	}
	
	for (i=0;i<n;i++)
		if (cal(i)>x)
			x=cal(i);
	
	printf("%I64d\n",x);
	return 0;
}