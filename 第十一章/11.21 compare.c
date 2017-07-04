#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define ANSWER "xuchen"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
	char try[SIZE];//数组名是常量指针不能++ 
	char *st;
	st = try;
	
	puts("Who's tianjian's daddy?");
	s_gets(try,SIZE);
	while(*st != '\0')
	{
	   *st = tolower(*st);
	   st++;
	}
	while (strcmp(try,ANSWER) != 0)
	{
		puts("no,try again!");
		s_gets(try,SIZE);
		while(*st != '\0')
	{
	   *st = tolower(*st);
	   st++;
	}
		
	}
	puts("That's right.");
	
	return 0;
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
