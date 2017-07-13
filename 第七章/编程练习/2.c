#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int count = 0;
	char c;
	
	printf("enter a text:") ;
	while((c = getchar()) != '#' && !isspace(c))
	{
		if(count % 8 == 0)
		    printf("\n");
		printf("%5c%5d",c,c);
		count++;
	}
	
	return 0;
}
