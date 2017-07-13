#include<stdio.h>
int main(void)
{
	int input,limit;
	
	printf("enter a numb:");
	scanf("%d",&input);
	limit = input + 11;
	
	while (input < limit)
	{
		printf("%d\n",input);
		input++;
	}
	
	return 0;
}
