//使用外部变量
#include<stdio.h>
int units = 0; //外部变量
void critic(void);

int main(void)
{
	extern int units;//可以不用重复声明
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units != 56)
	    critic();
	printf("you must have look it up!\n");
	
	return 0; 
 } 
 
 void critic(void)
 {
 	//不用重复声明units也能用
	 printf("No luck, my firend. Try again.\n");
	 scanf("%d",&units); 
 }
