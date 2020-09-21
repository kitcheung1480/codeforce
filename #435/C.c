#Include<stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int comb[20][3],i,j;
	for (i=0;i<20;i++)
	{
		comb[i][1]=2<<i;
		comb[i][0]=comb[i][1]-1;
		comb[i][2]=comb[i][0]+comb[i][1];
	}
	