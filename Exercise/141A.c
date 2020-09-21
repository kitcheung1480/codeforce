#include<stdio.h>
int main()
{
	int i,len,count[26]={0};
	char w[105];
	scanf("%s",&w);
	len=strlen(w);
	for (i=0;i<len;i++)
		count[w[i]-'A']++;
	scanf("%s",&w);
	len=strlen(w);
	for (i=0;i<len;i++)
		count[w[i]-'A']++;
	scanf("%s",&w);
	len=strlen(w);
	for (i=0;i<len;i++)
		count[w[i]-'A']--;
	for (i=0;i<26;i++)
		if (count[i]!=0)
		{
			printf("NO\n");
			return 0;
		}
	printf("YES\n");
	return 0;
}