#include<stdio.h>
int main()
{
	int n,cur=1,t,a[30004],i;
	scanf("%d %d",&n,&t);
	for (i=1;i<n;i++)
		scanf("%d",&a[i]);
	while (cur<t)
		cur+=a[cur];
	if (cur==t)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}