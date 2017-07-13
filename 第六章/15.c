#include<stdio.h>
#include<string.h>
int main(void)
{
	char words[256];
	int i;
	
	scanf("%s",words);
	for(i=strlen(words);i>=0;i--)
	{
		printf("%c",words[i]);
	
	}
	return 0;
}

