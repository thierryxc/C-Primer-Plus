//多次掷色子模拟程序
#include<stdio.h>
#include<stdlib.h>//为srand()提供原型
#include<time.h>//为time()提供原型
#include"diceroll.h"//双引号指示程序在本地查找文件，这是声明函数的头文件 

int main(void)
{
	int dice, roll;
	int sides;
	int status;
	
	srand((unsigned int) time(0) );//随机种子
	printf("Enter the number of sides per die, 0 to stop.\n");
	while(scanf("%d",&sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if( (status = scanf("%d",&dice)) != 1)
		{
			if (status == EOF)
		        break;//退出循环
			else
			{
				printf("You should have entered a integer.\nLet's begin again.\n");
				while(getchar() != '\n')
				    continue;//处理错误输入
				printf("How many sides? Enter 0 to stop.\n");
				continue;//进入下一轮 (从第一个while开始)
			 } 
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n"); 
	}
	printf("The rellem () function was called %d times.\n", roll_count);
	
	printf("88\n");
	
	return 0; 
}
