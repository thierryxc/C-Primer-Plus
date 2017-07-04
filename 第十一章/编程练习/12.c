#include<stdio.h>
#include<ctype.h>
#define SIZE 81

char * s_gets(char * st, int n);

int main(void)
{
	char input[SIZE];
	while (s_gets(input,SIZE) != NULL && input[0] != '\0')
	{
		int c1 = 1;
	    int c2 = 0;
	    int c3 = 0;
	    int c4 = 0;
	    int c5 = 0;
	    char *pt = input;
	    
	    while(*pt)
	    {
	    	if (isblank(*pt))
	    	{
	    		c1++;
	    		pt++;
			}
			else if (isupper(*pt))
			{
				c2++;
				pt++;
			}
				else if (islower(*pt))
			{
				c3++;
				pt++;
			}
				else if (isdigit(*pt))
			{
				c4++;
				pt++;
			}
			else
			{
				c5++;
				pt++;
			}
			
		}
	  printf("word: %d\nupper: %d\nlower: %d\ndigit: %d\npunct: %d\n",c1,c2,c3,c4,c5);
	}
	
	puts("DONE");
	
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

