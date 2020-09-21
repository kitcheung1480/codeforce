#include<stdio.h>
int main()
{
	int n,count[4]={0},i,temp,sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&temp);
		sum+=temp/4;
		temp%=4;
		count[temp]++;
	}
	temp=count[1]<count[3]?count[1]:count[3];
	sum+=temp;
	count[1]-=temp;
	count[3]-=temp;
	if (count[3]>0)
	{
		sum+=count[3];
		sum+=(count[2]+1)/2;
	}
	else
	{
		count[2]+=(count[1]+1)/2;
		sum+=(count[2]+1)/2;
	}
	printf("%d\n",sum);
	return 0;
}