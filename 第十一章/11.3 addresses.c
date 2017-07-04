//字符串的地址
#define MSG "I'm special"

#include<stdio.h>
int main()
{
	char ar[] = MSG;
	const char *pt = MSG;//指向 const 数据的指针 
	printf("address of \"I'm special\: %p \n","I'm special");
	printf("           address ar: %p\n", ar);//与其他三个不同 
	printf("           address pt: %p\n", pt);
	printf("           address MSG: %p\n", MSG);
	
	return 0;
 } 
