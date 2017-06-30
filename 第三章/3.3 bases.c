/* 以十进制 八进制 十六进制 打印十进制数100 */
#include<stdio.h>
int main(void)
{
	int x=100;
	
	printf("dec=%d; octal=%o; hex=%x\n",x,x,x);//不显示前缀 
	printf("dec=%d; octal=%#o; hex=%#x\n",x,x,x);//显示各进制前缀 
	
	return 0;
}
 
