#include<stdio.h>
int main()
{
	char word[1005];
	scanf("%s",word);
	printf("%c",word[0]>='a'?word[0]-'a'+'A':word[0]);
	printf("%s",&word[1]);
	return 0;
}