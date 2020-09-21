#include<stdio.h>
int main()
{
	int n,flag[26]={0},i,count=0;
	char ch;
	scanf("%d%*c",&n);
	for (i=0;i<n;i++)
	{
		scanf("%c",&ch);
		if (flag[(ch>='a')?ch-'a':ch-'A']==0)
		{
			flag[(ch>='a')?ch-'a':ch-'A']=1;
			count++;
		}
	}
	if (count==26)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}