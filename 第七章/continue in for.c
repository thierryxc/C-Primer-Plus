#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	for(count = 0;count < 10;count++)
	{
		ch = getchar();
		if (ch == '\n')
		    continue;
		putchar(ch); 
	
	}
	return 0;
 } 
