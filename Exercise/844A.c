#include<stdio.h>
int main()
{
	int k,i,count[26]={0},diff=0,L=0;
	char s;
	scanf("%c",&s);
	while (s!='\n')
	{
		L++;
		if (count[s-'a']==0)
		{
			diff++;
			count[s-'a']=1;
		}
		scanf("%c",&s);
	}
	scanf("%d",&k);
	if (k>L)
		printf("impossible\n");
	else
		printf("%d\n",diff>k?0:k-diff);
	return 0;
}