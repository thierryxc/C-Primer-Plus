#include<stdio.h>
#define LIM 81
char * getpos ( char * str, char c);
char * s_gets(char * st, int n);

int main(void)
{
	char input[LIM];
	char ch;

	puts("enter a string and the char you want:");
	puts("first the string(empty line to quit):");
	
	while (s_gets(input, LIM) && input[0] != '\0')
	    {
		   puts("and the word:");
		   scanf("%c",&ch);
		   if (getpos(input,ch))
		       puts("find it!!");
		   else
		       puts("no find");
		   puts(" the string(empty line to quit):"); 
		   s_gets(input, LIM); 
		  
	}
	puts("done!");
	return 0;
}

char * getpos ( char * str, char c)
{
	char *pt ;
	int i;
	
	for (i = 0;str[i]!= '\0'; i++)
	{    
		if (str[i] == c)
		   {
			pt = str + i;
		    break;
		}
	
	}
	if (str[i] == '\0')
	    return 0;
	
	return 1; 
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
		    i++;
		if ( st[i] == '\n')
		    st[i] = '\0';
		else
		    while ( getchar() != '\n')
		        continue;
	}
	
	return ret_val;
}
