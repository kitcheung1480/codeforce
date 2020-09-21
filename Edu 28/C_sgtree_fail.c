#include<stdio.h>
int main()
{
	int n,i;
	long long a[5005]={0},sgt[20005]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%I64d",&a[i]);
	void build(int i,int l,int r)
	{
		if (l>r)
			return ;
		if (l==r)
		{
			sgt[i]=a[l];
			return ;
		}
		build(i*2,l,(l+r)/2);
		build(i*2+1,(l+r)/2+1,r);
		sgt[i]=sgt[i*2]+sgt[I*2+1];
	}
	build(0,0,n-1);
	long long query(int i,int l,int r,int a,int b)
	{
		if (l>r||l>b||a>r)
			return 0;
		if (l>=a&&r<=b)
			return sgt[i];
		long long sum=0;
		sum+=query(i*2,l,(l+r)/2,a,b);
		sum+=query(i*2+1,(l+r)/2+1,r,a,b);
		return sum;
	}
	
	return 0;
}