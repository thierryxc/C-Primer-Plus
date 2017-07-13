#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	while ((ch = getchar()) != EOF)
	   {
		printf("%c %d",ch,ch);
	    count++;
	    if(ch == '\n')
	        count = 0;
	    if (count == 10){
		
	        printf("\n");
	        count = 0;}
}
	return 0;
 } 
