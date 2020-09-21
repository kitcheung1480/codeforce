#include<stdio.h>
int main()
{
	int n,m,k,i,j;
	scanf("%d %d %d",&n,&m,&k);
	char maze[505][505];
	int travel[505][505]={0};
	
	int dfs(int x,int y)
	{
		if (x>=n||x<0||y>=m||y<0||travel[x][y]==1||maze[x][y]=='#')
			return 0;
		travel[x][y]=1;
		int flag=1;
		if (dfs(x+1,y))
			flag=0;
		if (dfs(x,y+1))
			flag=0;
		if (dfs(x-1,y))
			flag=0;
		if (dfs(x,y-1))
			flag=0;
		if (flag)
		{
			if (k-->0)
				maze[x][y]='X';
			if (k<=0)
			{
				for (i=0;i<n;i++)
					printf("%s\n",maze[i]);
				exit(0);
			}
			return 0;
		}
		travel[x][y]=0;
		return 1;
	}
		
	
	for (i=0;i<n;i++)
		scanf("%s",maze[i]);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			if (maze[i][j]=='.')
				dfs(i,j);
	return 0;
}
	
	