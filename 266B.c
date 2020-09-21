#include<stdio.h>
int main()
{
	int n,t,i,j;
	char q[55];
	scanf("%d %d %s",&n,&t,q);
	for (i=0;i<t;i++)
		for (j=0;j<strlen(q)-1;j++)
			if (q[j]=='B'&&q[j+1]=='G')
			{
				q[j]='G';
				q[j+1]='B';
				j++;
			}
	printf("%s\n",q);
	return 0;
}