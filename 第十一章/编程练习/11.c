#include<stdio.h>
#include<string.h>
#define LIM 10
#define SIZE 81

void printstr(char *str[],int n);
void sortasc(char *str[],int n);
void sortlen(char *str[],int n);
void sortword(char *str[],int n);
char * s_gets(char * st, int n);
int wordlen(char *str);

int main(void)
{
	char input[LIM][SIZE];
	char *ptstr[LIM];
	char ch;
	int ct = 0;
	int i;
	
	printf("input at most %d lines:\n",LIM);
	while (ct < LIM && s_gets(input[ct],SIZE) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];
		ct++;
	}
	
	puts("Enter the choice you want: ");
	puts("a. printstr     b. sortasc     c.sortlen    d.sort first word   q.quit");
	
	while ((ch = getchar()) != 'q' )
	{
	
		switch (ch)
		{
			case 'a':printstr(ptstr,ct);
		             break;
			
			case 'b':sortasc(ptstr,ct);
			         printstr(ptstr,ct);
			         break;
			
			case 'c':sortlen(ptstr,ct);
		             printstr(ptstr,ct);
		             break;
		    
		    case 'd':sortword(ptstr,ct);
		             printstr(ptstr,ct);
			         break;
			
		}
		
		    	          
		}
		
	puts("DONE!!!");
	
	return 0;
	}
	
	
void sortasc( char *str[] ,int n)
{
	char *temp;
	int top, seek;
	
	for (top = 0; top < n - 1; top++)
	    for (seek = top + 1; seek < n; seek++)
	       {
		    if (strcmp(str[top],str[seek]) > 0)
			{
				temp = str[top];
				str[top] = str[seek];
				str[seek] = temp;
			 }
		}
 }
 
void sortlen( char *str[] ,int n)
{
	char *temp;
	int top, seek;
	
	for (top = 0; top < n - 1; top++)
	    for (seek = top + 1; seek < n; seek++)
	       {
		    if (strlen(str[top]) < strlen(str[seek]))
			{
				temp = str[top];
				str[top] = str[seek];
				str[seek] = temp;
			 }
		}
 }
 
 void printstr(char *str[],int n)
 {
 	int i;
 	
 	for (i = 0; i < n; i++)
 	    puts(str[i]);
 	
 }
 
int wordlen(char *str)
 {
 	int count = 0;
 	while(!isblank(*str) && (*str))
 	{
 	    count++;
 	    str++;
 	}
 	    
 	return count;
 }
 
void sortword( char *str[] ,int n)
{
	char *temp;
	int top, seek;
	
	for (top = 0; top < n - 1; top++)
	    for (seek = top + 1; seek < n; seek++)
	       {
		    if ( wordlen(str[top]) < wordlen(str[seek]) )
			{
				temp = str[top];
				str[top] = str[seek];
				str[seek] = temp;
			 }
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

