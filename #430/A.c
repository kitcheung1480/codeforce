#include<stdio.h>
int main()
{
	long long l,r,x,y,k,i;
	scanf("%I64d %I64d %I64d %I64d %I64d",&l,&r,&x,&y,&k);
	for (i=x;i<=y;i++)
		if ( (i*k>=l) && (i*k<=r) )
		{
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}