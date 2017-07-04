#include<stdio.h>
#include<ctype.h>

#define LIM 20
char * getword(char * str,int n);

int main(void)
{
	char *check;
	char ch[LIM-1];
	
	check = getword(ch,10);
	if (check == NULL)
	    puts("error!");
	else
	    puts(check);
	puts("DONE!");
	
	return 0;
}

char * getword(char * str, int n)
{
int ch;
int i = 0;
char * orig = str;
// skip over initial whitespace
while ((ch = getchar()) != EOF && isspace(ch) && i < n)
{
	i++;
	continue;
}


if (ch == EOF)
return NULL;
else
*str++ = ch; // first character in word
i++;
if (i >= n )
    puts("up!!!");
// get rest of word
while ((ch = getchar()) != EOF && !isspace(ch) && i < n)
{
	i++;
	*str++ = ch;

}

*str = '\0';
if (ch == EOF)
return NULL;
else
{
while (ch != '\n' || i < n){

ch = getchar();
i++;
}
return orig;
}
}

	


