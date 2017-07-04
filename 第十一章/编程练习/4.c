#include<stdio.h>
#include<ctype.h>

#define LIM 20
char * getword(char * str);

int main(void)
{
	char *check;
	char ch[LIM-1];
	
	check = getword(ch);
	if (check == NULL)
	    puts("error!");
	else
	    puts(check);
	puts("DONE!");
	
	return 0;
}

char * getword(char * str)
{
int ch;
char * orig = str;
// skip over initial whitespace
while ((ch = getchar()) != EOF && isspace(ch))
continue;
if (ch == EOF)
return NULL;
else
*str++ = ch; // first character in word
// get rest of word
while ((ch = getchar()) != EOF && !isspace(ch))
*str++ = ch;
*str = '\0';
if (ch == EOF)
return NULL;
else
{
while (ch != '\n')
ch = getchar();
return orig;
}
}

