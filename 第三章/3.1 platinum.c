/*your weight in platinum(白金)*/
#include<stdio.h>
int main(void)
{
	float weight,value;
	
	printf("Are your weight worth in platinum?\n");
	printf("enter your weight in pounds:");
	
	scanf("%f",&weight);//用于读取用户输入，%f：读取用户输入的浮点数；&符号找到weight的地点 
	
	value = 1700 * weight * 14.5833;
	
	printf("your weight is worth in platinum $%.2f.\n",value);
	
	return 0;
 } 
