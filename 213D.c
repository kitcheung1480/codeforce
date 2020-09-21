#include<stdio.h>
int main()
{
	typedef struct {
		double x;
		double y;
	}coor;
	coor star(int n,int pos)
	{
		coor ori[5]={{16.180339887498948482,0.0},{3.090169943749474241,-9.510565162951535721},{8.090169943749474241,5.877852522924731291687},{13.090169943749474241,-9.510565162951535721},{0.0,0.0}};
		if (n==0)
			return ori[pos];
		switch(pos)
		{
			case 0:
				ori[0].x*=n;
				return ori[0];
				 
			case 1:
				ori[0]=star(n,4);
				ori[1].x+=ori[0].x;
				return ori[1];
			case 2:
				ori[0]=star(n,4);
				ori[2].x+=ori[0].x;
				return ori[2];
			case 3:
				ori[0]=star(n,4);
				ori[3].x+=ori[0].x;
				return ori[3];
			case 4:
				return star(n-1,0);
		}
	}
	int i,j,n;
	scanf("%d",&n);
	printf("%d\n",n*4+1);
	for (j=0;j<5;j++)
		for (i=0;i<n;i++)
			printf("%.10lf %.10lf\n",star(i,j));
	for (i=0;i<n;i++)
		for (j=0;j<5;j++)
			printf("%d%c",i*5+j+1,(i==n-1&&j==4)?'\n':' ');
	int id(int k,int pos)
	{	return n*k+pos+1;	}
	printf("%d ",id(0,4));
	for (i=0;i<n;i++)
		printf("%d ",id(i,0));
	for (i=n-1;i>=0;i--)
		for (j=1;j<5;j++)
			printf("%d%c",id(i,j),i==0&&j==4?'\n':' ');
	return 0;
}
	