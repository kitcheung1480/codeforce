#include<stdio.h>
int main()
{
	int n,w[105]={},W,i,j,t;
	scanf("%d",&n);
	n*=2;
	for (i=0;i<n;i++)
		scanf("%d",&w[i]);
	for (i=0;i<n-1;i++)
		for (j=0;j<n-i-1;j++)
			if (w[j]>w[j+1])
			{
				t=w[j];
				w[j]=w[j+1];
				w[j+1]=t;
			}
	int copy[105]={};
	void cp(int wo1,int wo2)
	{
		int k;
		for (k=0;k<n;k++)
			if (k!=wo1&&k!=wo2)
				copy[k]=w[k];
			else
				copy[k]=-1;
	}
	int sumup()
	{
		int last=-1;
		int s=0,k;
		for (k=0;k<n;k++)
			if (copy[k]!=-1)
				if (last==-1)
					last=copy[k];
				else
				{
					s+=copy[k]-last;
					last=-1;
				}
		return s;
	}
	int min=999999999,temp;
	for (i=0;i<n;i++)
		for (j=i;j<n;j++)
			if (i!=j)
			{
				cp(i,j);
				temp=sumup();
				if (temp<min)
					min=temp;
			}
	printf("%d\n",min);
	return 0;
}