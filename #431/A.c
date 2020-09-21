#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[101],i;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	if (a[0]%2==0||a[n-1]%2==0||n%2==0)
	{
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	return 0;
}