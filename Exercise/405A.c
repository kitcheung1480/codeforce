#include<stdio.h>
int main()
{
	int n,a[105],i,j,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n-1;i++)
		for (j=0;j<n-i-1;j++)
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for (i=0;i<n;i++)
		printf("%d%c",a[i],i==n-1?'\n':' ');
	return 0;
}