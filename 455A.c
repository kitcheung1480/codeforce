#include<stdio.h>
int main()
{
	long long n,i,a,count[100005]={0};
	scanf("%I64d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%I64d",&a);
		count[a]++;
	}
	long long max(long long a,long long b)
	{	return a>b?a:b;	}
	long long m[100005]={0};
	for (i=100000;i>=0;i--)
		m[i]=max(m[i+1],m[i+2]+count[i]*i);
	printf("%I64d\n",m[0]);
	return 0;
}