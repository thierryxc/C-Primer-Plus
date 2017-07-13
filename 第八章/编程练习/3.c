#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int count_low = 0;
	int count_up = 0;
	char ch;
	
	while((ch = getchar()) != EOF)
	{
		if (islower(ch))
		    count_low++;
		if (isupper(ch))
		    count_up++;
	}
	printf("low is %d and up is %d\n",count_low,count_up);
	
	return 0;
 } 
