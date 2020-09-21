#include<stdio.h>
int main()
{
	int n,x=0,y=0,z=0,a,b,c;
	scanf("%d",&n);
	while (n-->0)
	{
		scanf("%d %d %d",&a,&b,&c);
		x+=a;
		y+=b;
		z+=c;
	}
	if (x==0&&y==0&&z==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}