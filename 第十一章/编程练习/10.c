#include<stdio.h>
#include<string.h>
#define LIM 20
char * s_gets(char * st, int n);
char * offblank( char *s1);
int main(void)
{
	char str1[LIM],str2[LIM];
	puts("first the string (empty line to quit):");
	while (s_gets(str1, LIM) && str1[0] != '\0')
	{
	puts(str1);	
	offblank(str1);
	puts(str1);
		
		puts("another string (empty line to quit):");
	
		
	}
	
	puts("done!");
	
	return 0;
	
}

char * offblank( char *s1)
{   
    char *pos;
	while (*s1)
	{
		if (*s1 == ' ')
		   {
		   	pos = s1;
		   	do{ 
			   *pos = *(pos+1);
			   pos++;
		}
		   	while
		   	(*pos);
		   }
		else
		    s1++;
	}
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
