#include<stdio.h>
int main()
{
	int n,i,a[101];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int dfs(int i,int flag)
	{
		if (i==n)
			return 0;
		if (flag==1)
			if (a[i]==1)
				return dfs(i+1,flag)+1;
			else
				return dfs(i+1,flag);
		else if (a[i]==0)
			return dfs(i+1,flag)+1;
		int a,b;
		a=dfs(i+1,1)+1;
		b=dfs(i+1,0);
		return a>b?a:b;
	}
	printf("%d\n",dfs(0,0));
	return 0;
}