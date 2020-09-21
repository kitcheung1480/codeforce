#include<stdio.h>
int main()
{
	int n,i,j;
	int a[5005]={0},sgt[20005]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int stack[5005][2]={},pt=0,flag=1,count=0;
	long long w[5005]={0};
	for (i=0,stack[0][0]=0;i<n;i++)
	{
		if (flag*a[i]<0)
		{
			flag=-flag;
			stack[pt++][1]=i-1;
			stack[pt][0]=i;
			w[pt]=a[i];
			count++;
		}
		else
			w[pt]+=(long long)a[i];
	}
	stack[pt++][1]=i-1;
	for (i=pt;i<pt+4;i++)
		stack[i][1]=stack[pt-1][1];
	int temp,min,p;
	long long abs(long long a)
	{	return a>0?a:-a;	}
	while (count>4)
	{
		for (i=0,min=5000000000001,p=pt-1;i<pt-1;i++)
			if (abs(w[i])+abs(w[i+1])<min)
			{
				min=abs(w[i])+abs(w[i+1]);
				p=i;
			}
		for (i=p+1,w[p]+=w[p+1],stack[p][1]=stack[p+1][1];i<pt-1;i++)
		{
			w[i]=w[i+1];
			stack[i][0]=stack[i+1][0];
			stack[i][1]=stack[i+1][1];
		}
		pt--;
		count--;
		for (i=0;i<pt-1;i++)
			if ((w[i]>0)==(w[i+1]>0))
			{
				
		for (j=i+1,w[i]+=w[i+1],stack[i][1]=stack[i+1][1];j<pt-1;j++)
		{
			w[j]=w[j+1];
			stack[j][0]=stack[j+1][0];
			stack[j][1]=stack[j+1][1];
		}

				pt--;
				count--;
				break;
			}
	}
	printf("%d %d %d\n",stack[0][1]+1,stack[1][1]+1,stack[2][1]+1);
	return 0;
}