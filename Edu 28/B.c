#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k,M,t[50],i,sum;
	scanf("%d %d %d",&n,&k,&M);
	int cmp(const int* a,const int* b)
	{	return *a - *b;	}
	for (i=0,sum=0;i<k;i++)
	{
		scanf("%d",&t[i]);
		sum+=t[i];
	}
	qsort(t,k,sizeof(int),cmp);
	int sum1=0,sum2=0,temp,m1=M,m2=M;
	for (i=0;i<k;i++)
	{
		temp=m1/t[i]>n?n:m1/t[i];
		sum1+=temp;
		m1-=t[i]*temp;
		if (temp<n)
			break;
	}
	temp=(m2/sum)>n?n:m2/sum;
	sum2+=temp*(k+1);
	m2-=sum*temp;
	n-=temp;
	for (i=0;i<k;i++)
	{
		temp=m2/t[i]>n?n:m2/t[i];
		sum2+=temp;
		m2-=t[i]*temp;
		if (temp<n)
			break;
	}
	printf("%d\n",sum1>sum2?sum1:sum2);
	return 0;
}