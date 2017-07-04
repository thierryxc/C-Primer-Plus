#include<stdio.h>
#define LIM 20
char * s_gets(char * st, int n);
char * mystrncpy( char *s1, char *s2,int n);
int main(void)
{
	char str1[LIM],str2[LIM];
	int i;
	int n;
	puts("first the string 1(empty line to quit):");
	while (s_gets(str1, LIM) && str1[0] != '\0')
	{
		puts("now string 2:");
		s_gets(str2, LIM);
		puts("how many do you want:");
		scanf("%d",&n);
		
		mystrncpy(str1,str2,n);
		
		puts(str1);
		
		puts("another string 1(empty line to quit):");
		s_gets(str1, LIM);
		
	}
	
	puts("done!");
	
	return 0;
	
}

char * mystrncpy( char *s1, char*s2,int n)
{
	int i = 1;
	char *p = s1; 

	while(*s1++)
	    continue;
	*--s1 = *s2;
	while(i < n && *s2)
	{
	    *++s1 = *++s2;
		i++;	
	}
	
	
	
	   
	    return s1;
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
