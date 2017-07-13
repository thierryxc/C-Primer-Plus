#include<stdio.h>
int main(void)
{
	int r,c_null,c_up,c_down,limit;
	char letter;
	
	printf("enter a letter:");
	scanf("%c",&letter);
	
	limit = letter - 'A';
	
	for(r = 0;r <= limit;r++)
	{ 
		for(c_null = 0;c_null <= limit - r;c_null++)
		{
			printf(" ");
		}
		for(c_up = 0;c_up < r;c_up++)
		{
			printf("%c",'A'+c_up);
		}
		for(c_down='A'+r;c_down>='A';c_down--)
		{
			printf("%c",c_down);
			
		}
		for(c_null = 0;c_null <= limit - r;c_null++)
		{
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
