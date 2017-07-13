#include<stdio.h>
int main(void)
{
	int n_space = 0;
	int n_n = 0;
	int ch = 0;
	char c;
	
	printf("enter a text:") ;
	while((c = getchar()) != '#')
	{
		if(c == ' ')
		    n_space++;
		if(c == '\n')
		    n_n++;
		else
		    ch++;
	}
	printf("there are %d space %d \\n and %d chars.",n_space,n_n,ch);
	
	return 0;
}
