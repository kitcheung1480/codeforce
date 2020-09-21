#include<cstdio>
#include<vector>
using namespace std;
	int n;
	int i,u,v;
	vector<int> V[100005];
	int s[100005];
	void pickside (int k,int side) {
		if (s[k]!=-1)
			return ;
	    //printf("%d on side %d\n",k,side);
		s[k]=side;
		int j;
		for (j=0;j<V[k].size();j++)
			pickside(V[k][j],(side+1)%2);
	}
int main()
{
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		s[i]=-1;
	for (i=0;i<n-1;i++)
	{
		scanf("%d %d",&u,&v);
		V[u].push_back(v);
		V[v].push_back(u);
	}
	pickside(u,0);
	long long count=0,neu=0;
	for (i=1;i<=n;i++)
		if (s[i]==1)
			count++;
		else if (s[i]==-1)
			neu++;
    //printf("count=%I64d\n",count);
	if (count+neu<=n/2)
		count+=neu;
	else if (count<n/2)
	    count=n/2;
	printf("%I64d\n",count*(n-count)-n+1);
	return 0;
}
