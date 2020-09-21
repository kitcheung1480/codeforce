#include<stdio.h>
int main()
{
	char g[4][10];
	int i,j;
	for (i=0;i<4;i++)
		scanf("%s",g[i]);
	int cmp(int x,int y,char c)
	{
		if (x<0||y<0||x>=4||y>=4)
			return -999;
		if (g[x][y]==c)
			return 1;
		return 0;
	}
	int search(int x,int y)
	{
		int count=cmp(x,y,g[x][y])+cmp(x+1,y,g[x][y])+cmp(x,y+1,g[x][y])+cmp(x+1,y+1,g[x][y]);
		if (count>0&&(count>=3||count<=1))
			return 1;
		return 0;
	}
	for (i=0;i<4;i++)
		for (j=0;j<4;j++)
			if (search(i,j)==1)
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}