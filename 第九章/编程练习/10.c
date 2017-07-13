
#include<stdio.h>
void to_base(unsigned long m,int n);

int main(void)
{
	unsigned long number;
	int ox;
	printf("Enter an integer(q to quit) and a num in 2~10:\n");
	while(scanf("%lu%d",&number,&ox) == 2 &&(ox >= 2 && ox <= 10))
	{
		printf("equivalent:");
		to_base(number,ox);
		putchar('\n');
			printf("Enter an integer(q to quit):\n");
	}
	
	printf("Done.\n");
	
	return 0;
 } 
 
 void to_base(unsigned long m,int n)
 {
 	int r;
 	
 	r = m % n;//n除以2的余数就是二进制右边第一位 
 	if (m >= n)
 	    to_base(m / n,n);//如果n大于等于2就从这里又开始调用函数，先不执行下一句 ，只有n小于2时开始从最高位依次打印 
 	printf("%d",r);
 	
 	return;
 }
