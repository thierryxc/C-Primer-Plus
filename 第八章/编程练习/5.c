#include<stdio.h>
char get_first(void);

int main(void)
{
	int guess,up,low;
	char input;
	
	guess = 50 ;
	up = 100;
	low = 0;
	
	
	printf("is your number %d?(enter l for lower,u for larger,y for bingo)\n",guess);
	input = get_first();
	while (input != 'y'){
	
	while(input != 'l' && input != 'u' && input != 'y')
	{
		printf("you must inout l,u or y:\n");
		input = get_first();
	}
	
	if (input == 'l')
	{
		low = guess;
		guess = low + (up - guess) / 2;
		
	}
	else if (input == 'u')
	{
		up = guess;
		guess = up - (guess - low) / 2;
	}

	    
	printf("is your number %d?(enter l for lower,u for larger,y for bingo)\n",guess);
	input = get_first();
}
    printf("done\n");
    
    
    return 0;
}

char get_first(void)
{
	int ch;
	
	ch = getchar();
	while(getchar() != '\n')
	    continue;
	
	return ch;
}
