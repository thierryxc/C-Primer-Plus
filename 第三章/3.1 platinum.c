/*your weight in platinum(�׽�)*/
#include<stdio.h>
int main(void)
{
	float weight,value;
	
	printf("Are your weight worth in platinum?\n");
	printf("enter your weight in pounds:");
	
	scanf("%f",&weight);//���ڶ�ȡ�û����룬%f����ȡ�û�����ĸ�������&�����ҵ�weight�ĵص� 
	
	value = 1700 * weight * 14.5833;
	
	printf("your weight is worth in platinum $%.2f.\n",value);
	
	return 0;
 } 
