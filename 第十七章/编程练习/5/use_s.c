//驱动程序测试Stack接口

#include<stdio.h>
#include"stack.h"

int main(void)
{
	Stack line;
	Item temp;

	
	InitializeStack(&line);
    puts("Test the stack: enter a string:");
    while((temp = getchar()) != '\n')
    {
    	if (!StackIsFull(&line))
    	{
    		printf("Enter %c in the Stack.\n", temp);
    		EnStack(temp, &line);	
		}
		else
		    puts("Stack is full!");
	}
	while (!StackIsEmpty(&line))
	{
		 DeStack(&temp, &line);
		 printf("%c",temp);
	}
	printf("\n");
	printf("Done.\n");
	
	return 0;
 } 
