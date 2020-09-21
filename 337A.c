#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,p[50]={0},min=1000000,cur,temp;
	scanf("%d %d",&n,&m);
	for (i=0;i<m;i++)
		scanf("%d",&p[i]);
	for (i=0;i<m;i++)
		for (j=0;j<m-i-1;j++)
			if (p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
	for (i=0;i<m-n+1;i++)
	{
		cur=p[i+n-1]-p[i];
		if (cur<min)
			min=cur;
	}
	printf("%d\n",min);
	return 0;
}