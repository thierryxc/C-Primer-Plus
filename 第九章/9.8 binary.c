//以二进制形式打印十进制数
#include<stdio.h>
void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%lu",&number) == 1)
	{
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
			printf("Enter an integer(q to quit):\n");
	}
	
	printf("Done.\n");
	
	return 0;
 } 
 
 void to_binary(unsigned long n)
 {
 	int r;
 	
 	r = n % 2;//n除以2的余数就是二进制右边第一位 
 	if (n >= 2)
 	    to_binary(n / 2);//如果n大于等于2就从这里又开始调用函数，先不执行下一句 ，只有n小于2时开始从最高位依次打印 
 	putchar(r == 0 ? '0' : '1');
 	
 	return;
 }
