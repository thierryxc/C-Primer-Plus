#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	
	while ( (ch = getchar()) && isblank(ch))
	    continue;
	
	while (getchar() != '\n')
	    continue;
	
	printf("%c",ch);
	
	return 0;
}
