//多次掷色子模拟程序
#include<stdio.h>
#include<stdlib.h>//为srand()提供原型
#include<time.h>//为time()提供原型
#include"diceroll.h"//双引号指示程序在本地查找文件，这是声明函数的头文件 

int main(void)
{
	int dice, roll, sets;
	int sides;
	int i;


	
	srand((unsigned int) time(0) );//随机种子
	printf("Enter the number of sets; enter q to stop:");
	while (scanf("%d",&sets) == 1 && sets > 0)
	{
	    printf("How many sides and how many dice?");
	    while (scanf("%d %d",&sides,&dice) != 2 || sides < 2 || dice < 1)
	    {
		    printf("error input.Try again!\n");
		    printf("How many sides and how many dice?");
		    scanf("%d %d",&sides,&dice);
	    }
	    
	    printf("Here are the %d sets of %d %d-sides throws.\n",sets, dice, sides);
	    for( i = 0; i < sets; i++)
	    {
	        roll = roll_n_dice(dice, sides);
	        printf(" %d ",roll);
	    }
	    printf("\nEnter the number of sets; enter q to stop:");
    }
	
	printf("88\n");
	
	return 0; 
}
