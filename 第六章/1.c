#include<stdio.h>
int main(void)
{
	char letters[26];
	int i;
	
	for(i = 0;i < 26;i++)
	{
		letters[i]='a' + i;
		printf("%c",letters[i]);
	}
	
	return 0;
 }
