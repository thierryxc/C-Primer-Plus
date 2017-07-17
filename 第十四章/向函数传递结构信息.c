//三种方式向函数传递结构的信息
#include<stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
}; 

double sum_a(double, double); //把结构成员作为参数传递

double sum_b(const struct funds *);//传递指向结构的指针

double sum_c(struct funds moolah);//传递一个结构 

int main(void)
{
	struct funds stan = { //初始化结构
	    "Garlic-Melon Bank",
		4302.27,
		"Lucky's Savings and Loan",
		8543.94 
	};
	
	printf("Stan has a total of $%.2f.\n", sum_a(stan.bankfund, stan.savefund));
	
	printf("Stan has a total of $%.2f.\n", sum_b(&stan));
	
	printf("Stan has a total of $%.2f.\n", sum_c(stan));
	
	return 0;
}

double sum_a(double x, double y)
{
	return ( x + y);
}

double sum_b(const struct funds * money)
{
	return ( money->bankfund + money->savefund);
}

double sum_c(struct funds moolah)
{
	return ( moolah.bankfund + moolah.savefund);
}

 
