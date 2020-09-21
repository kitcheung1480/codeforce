#include<stdio.h>
int main()
{
	long long k;
	int a,b,t1,t2;
	scanf("%I64d %d %d",&k,&a,&b);
	int A[4][4],B[4][4],i,j,cycle[82]={},pt=0,state[82]={},head=0;

	for (i=1;i<=3;i++)
		for (j=1;j<=3;j++)
			scanf("%d",&A[i][j]);
	for (i=1;i<=3;i++)
		for (j=1;j<=3;j++)
			scanf("%d",&B[i][j]);
	

	int checkS(int n,int m)
	{
		int t;
		for (t=0;t<pt;t++)
			if (state[t]==n*10+m)
			{
				head=t;
				return 1;
			}
		return 0;
	}

	int win(int n,int m)
	{
		if (n==m)
			return 0;
		if ((n==3&&m==2)||(n==2&&m==1)||(n==1&&m==3))
			return 1;
		return -1;
	}

	while (checkS(a,b)==0)
	{
		state[pt]=a*10+b;
		cycle[pt]=win(a,b);
		pt++;
		t1=A[a][b];
		t2=B[a][b];
		a=t1;
		b=t2;
	}

	int awin=0,bwin=0;
	long long N=0,M=0;

	for (i=0;i<head&&i<k;i++)
		if (cycle[i]==1)
			N++;
		else if (cycle[i]==-1)
			M++;


	if (k<=head)
	{
		printf("%I64d %I64d\n",N,M);
		return 0;
	}
	k-=head;
	for (i=head;i<pt;i++)
		if (cycle[i]==1)
			awin++;
		else if (cycle[i]==-1)
			bwin++;
	N+=k/(pt-head)*awin;
	M+=k/(pt-head)*bwin;
	k%=(pt-head);
	for (i=0;i<k;i++)
		if (cycle[head+i]==1)
			N++;
		else if (cycle[head+i]==-1)
			M++;
	printf("%I64d %I64d\n",N,M);
	return 0;
}