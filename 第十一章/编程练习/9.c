#include<stdio.h>
#include<string.h>
#define LIM 20
char * s_gets(char * st, int n);
char * strfan( char *s1);
int main(void)
{
	char str1[LIM],str2[LIM];
	puts("first the string (empty line to quit):");
	while (s_gets(str1, LIM) && str1[0] != '\0')
	{
		
	strfan(str1);
	puts(str1);
		
		puts("another string (empty line to quit):");
	
		
	}
	
	puts("done!");
	
	return 0;
	
}

char * strfan( char *s1)
{
	char temp;
	int i;
	int len = strlen(s1);
	for ( i = 0; i < len / 2; i++)
	{
		temp = s1[i];
		s1[i] = s1[len - i - 1];
		s1[len - i - 1] = temp;
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
