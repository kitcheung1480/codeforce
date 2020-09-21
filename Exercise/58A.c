#include<stdio.h>
int main()
{
	char ip;
	int h=0,e=0,l1=0,l2=0,o=0;
	scanf("%c",&ip);
	while (ip!='\n')
	{
		if (ip=='h'&&h==0)
			h=1;
		else if (ip=='e'&&h==1&&e==0)
			e=1;
		else if (ip=='l'&&h==1&&e==1&&l1==0)
			l1=1;
		else if (ip=='l'&&h==1&&e==1&&l1==1&&l2==0)
			l2=1;
		else if (ip=='o'&&h==1&&e==1&&l1==1&&l2==1)
		{
			printf("YES\n");
			return 0;
		}
		scanf("%c",&ip);
	}
	printf("NO\n");
	return 0;
}