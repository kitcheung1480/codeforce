#include<stdio.h>
int main()
{
	long long ax,ay,bx,by,cx,cy;
	scanf("%I64d %I64d %I64d %I64d %I64d %I64d",&ax,&ay,&bx,&by,&cx,&cy);
	
	if ((by-ay)*(cx-bx)==(cy-by)*(bx-ax)||(ax-bx)*(ax-bx)+(ay-by)*(ay-by)!=(cx-bx)*(cx-bx)+(cy-by)*(cy-by))
			printf("NO\n");
	else
			printf("YES\n");
	return 0;
}