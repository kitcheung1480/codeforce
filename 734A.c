#include<stdio.h>
int main()
{
	int n,A=0,D=0;
	char l;
	scanf("%d%*c",&n);
	while (n-->0)
	{
		scanf("%c",&l);
		if (l=='A')
			A++;
		else
			D++;
	}
	if (A==D)
		printf("Friendship\n");
	else if (A>D)
		printf("Anton\n");
	else
		printf("Danik\n");
	return 0;
}