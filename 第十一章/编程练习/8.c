#include<stdio.h>
#include<string.h>
#define LIM 20
char * s_gets(char * st, int n);
char * string_in( char *s1, char *s2);
int main(void)
{
	char str1[LIM],str2[LIM];
	puts("first the string 1(empty line to quit):");
	while (s_gets(str1, LIM) && str1[0] != '\0')
	{
		puts("now string 2:");
		s_gets(str2, LIM);

		puts(string_in( str1, str2));
		
		puts("another string 1(empty line to quit):");
	
		
	}
	
	puts("done!");
	
	return 0;
	
}

char * string_in( char *s1, char *s2)
{
    int l1 = strlen(s1);
    int l2 = strlen(s2);
   
    int try = l1 + 1 - l2;
   
    int i = 0;
   
    while ( i < try && strncmp(s1,s2,l2) != 0)
   {
   	    *++s1;
   	    i++;
   }
   
    if(*s1)
        return s1;
    else
       return NULL;
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
