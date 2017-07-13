//checking.c --输入验证
#include<stdio.h>
#include<stdbool.h>
//验证输入是一个整数
long get_long(void);
//验证范围的上下限是否有效
bool bad_limits(long begin,long end, long low,long high);
//计算a~b之间的整数平方和
double sum_squares(long a,long b);

int main(void)
{
	const long MIN = -10000000L;//下限
	const long MAX = 10000000L;//上限
	long start;
	long stop;
	double answer;
	
	printf("This program computes the sum of the squares of integers in a range.\n"
	        "the lower bound should not less than -10000000 and/n the upper bound should not"
	        "be more than +10000000.\n enter the limits (enter both 0 to quit):\n"
	        "lower limit:");
	start = get_long();
	printf("upper limit:");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start,stop,MIN,MAX))
		    printf("please try again.\n");
		else
		{
			answer = sum_squares(start,stop);
			printf("the sum of the squares of the integers from %ld to %ld is %g\n",start,stop,answer);//%g 根据值的不同自动选择%f 或 %e 
		}
		printf("enter the limits (enter both 0 to quit):\n"
	           "lower limit:");
	    start = get_long();
	    printf("upper limit:");
	    stop = get_long();
		
	 } 
	printf("Done!\n");
	
	return 0;
 } 
 
 long get_long(void)
 {
 	long input;
 	char ch;
 	
 	while (scanf("%ld",&input) != 1)//输入不是整数 
 	{
 		while ((ch = getchar()) != '\n')
 		    putchar(ch);//把一行全部输出 
 		printf(" is not an integer.\nPlease enter an integer value such as 23,5,-523 or 3:");
	 }
	 
	 return input;
	 
 }
 
 double sum_squares(long a,long b)
 {
 	double total = 0;
 	long i;
 	
 	for (i = a ; i <= b; i++)
 	    total += (double) i * (double) i;
 	    
 	return total;
 }
 
 bool bad_limits(long begin,long end,long low,long high)
 {
 	bool not_good = false;
 	
 	if (begin > end)
 	{
 		printf("%ld isn't smaller than %ld.\n",begin,end);
 		not_good = true;
	 }
	
	if (begin < low || end <low)
	{
		printf("value must be %ld or greater.\n",low);
		not_good = true;
	}
	
	if (begin > high || end > high)
	{
		printf("values must be %ld or less.\n",high);
		not_good = true;
	}
	
	return not_good;
	
 }
