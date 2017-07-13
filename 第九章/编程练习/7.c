#include<stdio.h>
#include<ctype.h> 
int location(char ch);

int main(void)
{ 
  char ch;
  
  while ((ch = getchar()) != EOF)
  {
  	 if(location(ch) == -1)
  	     continue;
  }
  
  return 0;
}

int location(char ch)
{
	int w;
	char a;
	
	if (isalpha(ch))
	{
		a = toupper(ch);
	    w = (int) a - 64;
		printf("%c is an alpha with location %d.\n",ch,w);	
	}
	else
	    return -1;

}
