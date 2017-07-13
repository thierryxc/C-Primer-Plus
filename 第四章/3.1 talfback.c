//演示与用户交互
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4//定义一个常量：人体密度
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];//容量为40的数组
	
	printf("hi, what's your first name?\n");
	scanf("%s",name);//字符串不用 & 
	printf("%s,what's your weight in pounds?",name);
	scanf("%f",&weight);
	
	size = sizeof(name);//数组大小 
	volume = weight / DENSITY;
	letters = strlen(name);//字都串长度 
	
	printf("%s,you are %2.2f cubic feet\n",name,volume);
	printf("your first name has %d letters\n",letters);
	printf("and we have %d bytes to store it",size);
	
	return 0;
	
 } 
