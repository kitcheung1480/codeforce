#include<stdio.h>
int main()
{
	int count4=0,count7=0;
	char ch;
	scanf("%c",&ch);
	while (ch!='\n')
	{
		if (ch=='4')
			count4++;
		if (ch=='7')
			count7++;
		scanf("%c",&ch);
	}
	if (count4==0&&count7==0)
		printf("-1\n");
	else
		printf("%c\n",count4>=count7?'4':'7');
	return 0;
}