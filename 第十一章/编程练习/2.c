#include<stdio.h>
#include<ctype.h>
#define LIM 10
char * getnchar(char * str,int n);

int main(void)
{
	char input[LIM];
	char *check;
	
	check = getnchar(input , LIM - 1);
	if ( *check == NULL)
	    printf("error!\n");
	else
	   puts(input);
	puts("Done!");
	
	return 0;    
}

char * getnchar(char * str,int n)
{
	int i,ch;
	for ( i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch != EOF && !isblank(ch) )
		    str[i] = ch;
		else
		    break;
	}
	if ( ch == EOF)
		return NULL;
	else
	    {
	    	str[i] = '\0';
	    	return str;
		}
}
