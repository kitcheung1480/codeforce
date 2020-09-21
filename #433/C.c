#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long n,k,i;
	typedef struct {
		long long cost;
		long long idx;
	} flight;
	flight p[300005]={};

	scanf("%I64d %I64d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf("%I64d",&(p[i].cost));
		(p[i].idx)=i+1;
	}
	long long sum=0;
	int cmp(const flight* a,const flight* b)
	{
		if ((a->cost) == (b->cost))
			return (b->idx) > (a->idx);
		return (b->cost) > (a->cost);
	}

	qsort(p,n,sizeof(flight),cmp);
	int flag[300005]={};

	long long t,cur[300005];
	for (i=0;i<n;i++)
	{
		t=((p[i].idx)>k+1)?(p[i].idx):k+1;
		while (flag[t-k-1]==1)  t++;
		flag[t-k-1]=1;
		sum+=(t-(p[i].idx))*(p[i].cost);
		cur[p[i].idx]=t;

	}
	printf("%I64d\n",sum);

	for (i=1;i<=n;i++)
		printf("%I64d%c",cur[i],i==n?'\n':' ');
	return 0;
}
			