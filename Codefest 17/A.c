#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	char name[105][100];
	int i,j,flag;
	for (i=0;i<N;i++)
	{
		scanf("%s",&name[i]);
		flag=0;
		for (j=0;j<i;j++)
			if (strcmp(name[i],name[j])==0)
			{
				printf("YES\n");
				flag=1;
				break;
			}
		if (flag==0)
			printf("NO\n");
	}
	return 0;
}