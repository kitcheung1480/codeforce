#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);

	typedef struct {
		char name[35];
		int key;
	}T;
	int cmp(const void* a,const void* b)
	{
		int c=strcmp(((T*)a)->name,((T*)b)->name);
		if (c==0)
			return ( ((T*)a)->key - ((T*)b)->key );
		else
			return c;
	}
	T a[100005];

	int map[100005];

	for (i=0;i<n;i++)
	{
		scanf("%s",a[i].name);
		a[i].key=i;
	}
	qsort(a,n,sizeof(T),cmp);
	for (i=0;i<n;i++)
		map[a[i].key]=i;
	int re[100005]={0};
	for (i=0;i<n-1;i++)
		if (strcmp(a[i].name,a[i+1].name)==0)
			re[a[i+1].key]=re[a[i].key]+1;
	for (i=0;i<n;i++)
		if (re[i]==0)
			printf("OK\n");
		else
			printf("%s%d\n",a[map[i]].name,re[i]);
	return 0;
}