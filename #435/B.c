#include<stdio.h>
int main()
{
	int n;
	int s[100005];
	for (i=0;i<100005;i++)
		s[i]=-1;
	scanf("%d",&n);
	struct p {
	    int u;
	    int v;
	}pair[100005];
	int i,a,b;
	for (i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
		if (a>b)
		{
		    pair[i].u=b;
		    pair[i].v=a;
		}
		else
		{
		    pair[i].u=a;
		    pair[i].v=b;
		}
	}
	int cmp(const struct p* a,const struct p* b)
	{
		if (a->u == b->u)
			return a->v - b->v;
		else
			return a->u - b->u;
	}
	qsort(pair,n-1,sizeof(struct p),cmp);
	for (i=0;i<n-1;i++)
	    s[pair[i].v]=(s[pair[i].u]+1)%2;
	long long count=0;
	for (i=1;i<=n;i++)
		if (s[i]==1)
			count++;
	printf("%I64d\n",count*(n-count)-n+1);
	return 0;
}