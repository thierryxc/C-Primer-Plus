//掷色子模拟程序
#include"diceroll.h"//双引号指示程序在本地查找文件，这是声明函数的头文件 
#include<stdio.h>
#include<stdlib.h>//提供rand()的原型



static int rollem(int sides)  //静态内部链接,该文件私有,是roll_n_dice的辅助函数 
{
	int roll;
	
	roll = rand() % sides + 1;

	
	return roll; 
 }

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	} 
	if ( dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;	
	}
	
	for (d = 0; d < dice; d++)
	    total += rollem(sides);
	    
	return total;
}
