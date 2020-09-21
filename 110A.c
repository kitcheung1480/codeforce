#include<stdio.h>
int main()
{
	char ch;
	int count=0;
	scanf("%c",&ch);
	while (ch!='\n')
	{
		if (ch=='4'||ch=='7')
			count++;
		scanf("%c",&ch);
	}
	if (count==4||count==7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}