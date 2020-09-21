#include<stdio.h>
int main()
{
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);
	int s[55];
	for (i=0;i<n;i++)
		scanf("%d",&s[i]);
	for (i=0;s[i]>=s[k-1]&&s[i]>0&&i<n;i++,count++);
	printf("%d\n",count);
	return 0 ;
}