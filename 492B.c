#include<stdio.h>
int main()
{
	int n,l,i,j,t,a[1005];
	scanf("%d %d",&n,&l);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n-1;i++)
		for (j=0;j<n-i-1;j++)
			if (a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
	int max(int a,int b){return a>b?a:b;}
	int m=max(a[0]*2,(l-a[n-1])*2),cur=a[0];
	for (i=1;i<n;cur=a[i],i++)
		if (a[i]-cur>m)	m=a[i]-cur;
	printf("%d%s\n",m/2,m%2==0?".0000000000":".5000000000");
	return 0;
}