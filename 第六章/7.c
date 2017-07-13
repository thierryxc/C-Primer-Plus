#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	char word[40];
	
	printf("enter a word:");
	scanf("%s",word);
	
	for(i=strlen(word);i>=0;i--)
	{
		printf("%c",word[i]);
	}
	return 0;
 } 
