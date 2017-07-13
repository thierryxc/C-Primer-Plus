#include<stdio.h>
int main(void)
{
	int input,mo,limit;
	
	printf("enter a numb as mo:");
	scanf("%d",&mo);
	printf("enter a numb as input:");
	scanf("%d",&input);
	
	while (input >0)
	{
		printf(" the input mo mo is %d\n",input%mo);
		printf("enter a numb as input:");
	    scanf("%d",&input);
	}
	printf("8888888");
	
	return 0;
}
