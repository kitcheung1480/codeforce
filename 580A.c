#include<stdio.h>
int main()
{
	int n,i,a[100005],len,max=1,cur;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (cur=a[0],i=1,len=1;i<n;cur=a[i++])
		if (a[i]>=cur)
		{
			if (++len>max)
				max=len;
		}
		else
			len=1;
	printf("%d\n",max);
	return 0;
}