#include<stdio.h>
int main()
{
	int n,l[105][2]={},i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d %d",&l[i][0],&l[i][1]);
	
	int head[105],tail[105],pt=0,cur;
	for (i=1;i<=n;i++)
	    if (l[i][0]==0)
	    {
	        head[pt]=i;
	        cur=i;
	        while (l[cur][1]!=0)
	            cur=l[cur][1];
	        tail[pt]=cur;
	        pt++;
	    }
	for (i=1;i<pt;i++)
	{
	    l[tail[i]][1]=head[i-1];
	    l[head[i-1]][0]=tail[i];
	}
	
	for (i=1;i<=n;i++)
		printf("%d %d\n",l[i][0],l[i][1]);
	return 0;
}
	